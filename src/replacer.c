/***********************************************************************
 * In Java I can say:
 *
 *          String str = "Hellö";
 *          str.replaceall("ö", "o");
 *
 *
 * I want to do that in C too, like:
 *
 *          char* str = "Hellö";
 *          replaceall("ö", "o");
 *
 * @author Lennart Hahner
 * @version 1.0
 * **********************************************************************/
#include "../includes/libs.h";
#include "regex.h";
#define TESTCASE_1 "Hello World \n";
#define TESTCASE_2 "Hallo";

char *replaceall(char *regex, char *n_str, char *str);
int signal_handling();
char *replace(char c, char n_c, char *str);

int main(int *argc, int *argv)
{

    char *result = replace('a', 'e', "Hallo");
}

int signal_handling()
{
    sig_atomic_t signal = 1;
    return signal;
}

/**
 * @param regex regularexpression which should be matched against and replaced
 * @param n_str replacement string.
 * @returns String with the replaced value.
 */
char *replaceall(char *regex, char *n_str, char *str)
{
    regmatch_t match_t;

    if (regex == NULL || n_str == NULL || str == NULL)
    {
        raise(SIGABRT);
    }
    regex_t tregex;
    if (regcomp(&tregex, regex, 0) == 1)
    {
        raise(SIGALRM);
    }
    else
    {
        regexec(regex, str, 0, NULL, 0);
    }
}

/**
 * Replaces only the first occurance of a character.
 *
 * @param c character which should be replaced.
 * @param n_c character which replaces c.
 * @param str string in which the character should be replaced.
 * @returns input string with replaced value.
 */
char *replace(char c, char n_c, char *str)
{
    char *tmp = malloc(20);

    if (str == NULL)
    {
        raise(SIGABRT);
    }
    // only 256 character
    if (strlen(str) < 256)
    {
        // checking frist and last at first to reduce runtime.
        if (str[0] == c)
        {
            memset(str, n_c, 0);
            puts(str);
            return str;
        }
        else if (str[strlen(str)] == c)
        {

            memset(str, n_c, strlen(str));
            puts(str);
            return str;
        }

        // then checking all.

        for (int i = 0; i < strlen(str); i++)
        {

            if (str[i] == c)
            {
                tmp[i] = n_c;
                continue;
            }
            tmp[i] = str[i];
        }
        return tmp;
    }
    else
    {
        printf("Aborting, please use replaceintext() instead of reapace().\n");
        raise(SIGABRT);
    }
}

/**
 * @todo replace in text which is longer than 256 characters.
 *
 * @param c character which should be replaced.
 * @param n_c character which replaces c.
 * @param str string in which the character should be replaced.
 * @returns input string with replaced value.
 */
char *replaceintext(char c, char c_n, char *str)
{
    //...
}