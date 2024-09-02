/************************************************************************
 * This program will read the log2file.xml and check the options provided.
 * In the log2file.xml the user should provide information like, log
 * to a file or log to console.
 *
 *
 * @author Lennart Hahner
 * @version 1.0
 * **********************************************************************/
#include "../includes/libs.h"
#include "../includes/loggerlib.h"
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/parser.h>

FILE *fconfig;
char fbuf[BUFSIZ];
xmlDocPtr doc;
xmlNodePtr cur;

int config2buffer();
int checkXmlStructure(xmlDocPtr doc);
int countChildren(xmlNodePtr cur);
FILE *createLogFile(xmlNodePtr cur);
xmlNodePtr checkFileNode(xmlNodePtr cur);
xmlNodePtr checkCategorieNode(xmlNodePtr cur, char *type);

int main()
{
    log2Console("Error", "No Data Found for this item.");
}

/**
 * Checks the Structure of the XML-Document.
 * It should definied in a certain way,
 * so the reading of the document can be done.
 *
 * @return -1 if an the structure is not correct.
 * @return 1 if $default flag is active.
 */
int checkXmlStructure(xmlDocPtr doc)
{
    cur = xmlDocGetRootElement(doc);
    if (cur == NULL)
    {
        fprintf(stderr, "No root Element found in XML-File.");
        xmlFreeDoc(doc);
        return -1;
    }
    else
    {
        // Check root node
        if (xmlStrcmp(cur->name, (const xmlChar *)"configuration") >= 0)
        {

            if (cur->children != NULL)
            {
                // TODO
                // identify which type of logging the user wants, and afterwards
                // check for logging pattern.
                cur = checkCategorieNode(cur, "Info");
                createLogFile(checkFileNode(cur));

                if (strcmp((const char *)cur->children->next->children->next->properties->children->content, "$default") == 0)
                {
                    return 1;
                }
            }
        }
    }
    return -1;
}

/**
 * This method will return the File-Node
 * which includes the path as an attribute.
 *
 * @param cur the starting element.
 * @return the Element with File Node.
 */
xmlNodePtr checkFileNode(xmlNodePtr cur)
{
    xmlNodePtr tmp = malloc(sizeof(cur));
    tmp = cur->children;
    while (strcmp((const char *)tmp->name, "File") != 0)
    {
        tmp = tmp->next;
    }
    free(tmp);
    return tmp;
}

/**
 * This method will return the categorie-Node
 * which includes the log-type as an attribute.
 *
 * @param cur the starting element.
 * @return the Element with type Attribute.
 */
xmlNodePtr checkCategorieNode(xmlNodePtr cur, char *type)
{
    xmlNodePtr tmp = malloc(sizeof(cur));
    tmp = cur->children->next;
    while (tmp != NULL)
    {
        if (tmp->properties != NULL && strcmp((const char *)tmp->properties->children->content, type) == 0)
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    free(tmp);
    return NULL;
}

/**
 * This function should create a Log
 * File and name it like it was definied
 * in the log2file.xml
 *
 * @returns the stream for the logfile.
 * @param xmlNodePtr the xml-element.
 */
FILE *createLogFile(xmlNodePtr cur)
{
    char *path = (char *)cur->properties->children->content;
    FILE *errorlog = fopen((const char *)path, "w+");
    return errorlog;
}

/**
 * Function will count the children of
 * the provided Node.
 *
 * @param cur current node which should be checked
 * @return count of children
 */
int countChildren(xmlNodePtr cur)
{
    int childrenCounter = 0;
    xmlNodePtr tmp = malloc(sizeof(xmlNodePtr));
    tmp = cur->children;

    while (tmp->next != NULL)
    {
        if (strcmp((const char *)tmp->next->name, "text"))
        {
            tmp = tmp->next;
            continue;
        }
        tmp = tmp->next;
        childrenCounter++;
    }
    free(tmp);
    return childrenCounter;
}

/**
 * @deprecated
 * Read the xml config where the user provides,
 * where they want which output.
 *
 * @return 1 if reading failed 0 if not
 */
int config2buffer()
{
    fconfig = fopen("../config/log2file.xml", "r+");
    if (fconfig == NULL)
    {
        printf("Config not found, aborting... \n");
        raise(SIGABRT);
    }
    else
    {
        char *tmp = malloc(sizeof(BUFSIZ));
        while (fgets(tmp, sizeof(BUFSIZ), fconfig))
        {
            strcat(fbuf, tmp);
        }
        free(tmp);
    }
}