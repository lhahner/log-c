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

char buffer[BUFSIZ];
FILE *fptr;
sig_atomic_t sig = 0;

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

// a stream is just a contious stream of characters
// int main(int *argc, int *argv)
// {
//     log2File("Compliation Error, Aborting...");
// }

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
        const char *logline = formatLogLine("[ERROR]", stream);
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
char *formatLogLine(char *message_type, char *message)
{
    // Format -> [<message_type>] -- <message>
    char *log_line = malloc(256);
    int i = 0;

    time_t rawtime = time(NULL);

    // use-case for replacer.c
    char *time = asctime(gmtime(&rawtime));
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

    return log_line;
}