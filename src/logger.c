//Somehow writing logs into files
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

FILE *fptr;
char *log_buffer;
sig_atomic_t sig = 0;

int signal_handler();
void log2File(char* stream);
char* formatLogLine(char* message_type, char* message);
int log2buffer(char* stream);


int signal_handler(){
    sig = 1;
    fclose(fptr);
    exit;
}

//a stream is just a contious stream of characters
int main(int *argc, int *argv){
    //fptr = fopen("../target/logs/error.log", "w+");
    //signal(SIGILL, signal_handler(SIGILL));
    //log2File("Hello World");

    char* logline = formatLogLine("[ERROR]", "-- Computing Error, Aborting -- \n");
    sprintf("", logline);
    return 0;
}

void log2File(char* stream){
    if(stream == NULL){
        raise(SIGABRT);
    }
    else {
        fputs(stream, fptr);
    }
}

char* formatLogLine(char* message_type, char* message){
    char *log_line = malloc(256);
    int i = 0;

    time_t rawtime;
    struct tm * timeinfo;
    timeinfo = localtime(&rawtime);
    char *time = asctime(timeinfo);
    
    //0 -> "2", 1 -> "0", 2 -> ":", 3 -> "5", 4 -> "3"
    for(; i<sizeof time; i++){
        log_line[i] = time[i];
    }
    //i = 4

    if(message_type != NULL){
        
        for(int j = 0;j<sizeof message_type; j++){
            log_line[i] = message_type[j];
            i++;
        }
    }
    else {
        raise(SIGABRT);
        //[ERROR] -> 11
    }

    if(message != NULL){
        for(int j = 0;j<sizeof message; j++){
            log_line[i] = message[j];
            i++;
        }
    }
    else {
        raise(SIGABRT);
    }

    return log_line;
}

int log2buffer(char* stream){
    if(stream == NULL){
        raise(SIGABRT);
    }
}

