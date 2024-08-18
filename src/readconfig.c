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
#include <libxml2/libxml/xmlversion.h>

FILE *fconfig;
char fbuf[BUFSIZ];

int config2buffer();

int main(int *argc, int *argv)
{
    config2buffer();
}

/**
 * TODO
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
    }
}