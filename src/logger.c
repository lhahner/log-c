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
#include "../includes/libs.h";
#include "../includes/loggerlib.h";

char buffer[BUFSIZ];
FILE *fptr;
sig_atomic_t sig = 0;

int signal_handler()
{
    sig = 1;
    fclose(fptr);
    exit;
}

// a stream is just a contious stream of characters
int main(int *argc, int *argv)
{
    char *log = formatLogLine("[Error]", "Not allowed here, aborting.");
}

void log2File(char *stream)
{
    if (stream == NULL)
    {
        raise(SIGABRT);
    }
    else
    {
        fputs(stream, fptr);
    }
}

char *formatLogLine(char *message_type, char *message)
{
    // Format -> [<message_type>] -- <message>
    char *log_line = malloc(256);
    int i = 0;

    time_t rawtime = time(NULL);
    // currently this string contains \n at the end, which I want to replace with " "
    // use-case for repalcer.c
    char *time = asctime(gmtime(&rawtime));

    // 0 -> "2", 1 -> "0", 2 -> ":", 3 -> "5", 4 -> "3"
    for (; i < strlen(time); i++)
    {
        log_line[i] = time[i];
    }
    // i = 4

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

        log_line[i] = ' ';
        i++;
        log_line[i] = '-';
        i++;
        log_line[i] = '-';
        i++;
        log_line[i] = ' ';
        i++;

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

int log2buffer(FILE *file, char stream)
{
    if (stream == NULL)
    {
        raise(SIGABRT);
        return 1;
    }
    setbuf(file, stream);
    return 0;
}
