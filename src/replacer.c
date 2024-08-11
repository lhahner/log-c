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
#include "../includes/libs.h"
#include "regex.h"
#include "../includes/replacer.h"

#define TESTCASE_1 "Hello World \n";
#define TESTCASE_2 "Hallo";
#define SIZE 256;

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
    char *tmp = malloc(256);
    memcpy(tmp, str, 256);

    if (str == NULL)
    {
        raise(SIGABRT);
    }

    // only 256 characters allowed
    if (strlen(str) < 256)
    {
        // checking frist and last at first to reduce runtime.
        if (str[0] == c)
        {
            tmp[0] = n_c;
            return tmp;
        }
        else if (str[strlen(str) - 1] == c)
        {

            tmp[strlen(str) - 1] = n_c;
            return tmp;
        }

        // then checking all.
        int i = 0;
        while (str[i] != '\0')
        {

            if (str[i] == c)
            {
                tmp[i] = n_c;
                i++;
                return tmp;
            }
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