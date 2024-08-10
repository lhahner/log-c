#include "./libs.h";

int signal_handler();
void log2File(char *stream);
char *formatLogLine(char *message_type, char *message);
int log2buffer(FILE *file, char stream);