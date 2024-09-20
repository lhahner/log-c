/************************************************************************
 * Logger.c is one of some program collections to bring the cross
 * cutting concerns to C. Which are a part for modularing appliations
 * with Aspect-Oriented Programming which is often refrenced
 * a super-paradigma of OOP. But since you can encapuslate problems also
 * in imperative-procdular languages like C, it might be appropriate to
 * handle aspacts in programs.
 *
 * @author Lennart Hahner
 * @version 1.0
 * **********************************************************************/
#include "../includes/libs.h"
#include "../includes/loggerlib.h"
#include "../includes/replacer.h"
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/parser.h>

char buffer[BUFSIZ];
FILE *fptr;
sig_atomic_t sig = 0;

/**
 * @todo
 * Should be used in the future instead of char*
 * for warnings.
 */
enum type
{
    ERROR = 0,
    WARNING = 1,
    INFO = 2
};

/**
 * Signal handling if detected.
 *
 * @return exits program
 */
int signal_handler()
{
    sig = 1;
    fclose(fptr);
    exit;
}

/**
 * This function logs to the console.
 * It uses the configuration file to define a format
 * for the logging.
 *
 *
 * @param message The message that should be displayed
 *
 */
void log2Console(char *type, char *message)
{
    xmlDocPtr doc = xmlParseFile("../config/log2file.xml");
    if (doc == NULL)
    {
        raise(SIGIO);
        fprintf(stderr, "File Not found.");
    }
    else
    {
        if (checkXmlStructure(doc) == 1)
        {
            for(int i = 0; i<strlen(type); i++){
                type[i] = toupper(type[i]);
            }
            formatDefaultLogLine(type, message);
        }
        else
        {
            fprintf(stderr, "Error while defining format.");
            return;
        }
    }
}

/**
 * This function calls the default formatter
 * and writes the output to the log file.
 * Which resides at: './res/error.log'.
 *
 * @param stream which is provided by the user.
 */
void log2File(char *stream)
{
    if (stream == NULL)
    {
        raise(SIGABRT);
    }
    else
    {
        fptr = fopen("../res/error.log", "w+");
        const char *logline = formatDefaultLogLine("[ERROR]", stream);
        fputs(logline, fptr);
        fclose(fptr);
    }
}

/**
 * This method will format a string, that will be the final input in the Log
 * File or in the command line. This method is used by default, if the user
 * is not providing any custom attachments in the .xml file.
 *
 * @param message_type the output type, e.g.: INFO, ERROR or WARING
 * @param message the output message specified by the user
 * @return formatted log string which consitst of message type, message and date.
 */
char *formatDefaultLogLine(char *message_type, char *message)
{
    // Format -> [<message_type>] -- <message>
    char *log_line = malloc(256);
    int i = 0;

    time_t rawtime = time(NULL);

    // use-case for replacer.c
    struct tm * ptm = localtime(&rawtime);
    ptm->tm_hour+1;
    char *time = asctime(ptm);  
    time = replace('\n', ' ', time);

    // 0 -> "2", 1 -> "0", 2 -> ":", 3 -> "5", 4 -> "3"
    for (; i < strlen(time); i++)
    {
        log_line[i] = time[i];
    }

    if (message_type != NULL)
    {
        if (i > strlen(log_line))
        {
            raise(SIGABRT);
        }
        else
        {
            for (int j = 0; j < strlen(message_type); j++)
            {
                log_line[i] = message_type[j];
                i++;
            }
        }
    }
    else
    {
        raise(SIGABRT);
        //[ERROR] -> 11
    }

    if (message != NULL)
    {
        char *seperator = " -- ";
        strcat(log_line, " -- ");
        i = i + (strlen(" -- "));

        for (int j = 0; j < strlen(message); j++)
        {

            log_line[i] = message[j];
            i++;
        }
    }
    else
    {
        raise(SIGABRT);
    }

    printf("%s\n", log_line);
    return log_line;
}