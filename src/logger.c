//Somehow writing logs into files
#include <stdio.h>
#include <stdlib.h>

FILE *fptr;


//a stream is just a contious stream of characters
int main(int *argc, int *argv){
    fptr = fopen("error.log", "w+");
    return 0;
}

void log2File(char* stream){


}

