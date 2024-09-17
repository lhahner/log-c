#include "../includes/libs.h"

int main(int argc, char** argv)
{
    char* log_expression = malloc(sizeof(char*));
    for(int i = 2; i<argc; i++){
        strcat(log_expression, argv[i]);
        strcat(log_expression, " ");
    }
    log2Console(argv[1], log_expression); 
    free(log_expression);  
}