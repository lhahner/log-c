# logc - logging with C and Bash 
 
This is a collection of programs for cross-cutting concerns in C. This means all these programs should handle expected functionalities as logging, error-handling or other.
The Road-Map below is [CLA-Associate ]{https://cppinstitute.org/cla}

One of the cross-cutteing concerns is logging. This program should implement an easy and custimzable logger in C.
Surely there are multiple implementations that cover logging in C and this is just an alternative.
It takes the really good practices of log4j and implements them in C, like having a customizable logging file or implement it in C and in Shell-Skript.
https://mvnrepository.com/artifact/log4j/log4j.

## How to use logc

With the logging configuration file you can specify the pattern how the logging text should look.
Also it is possible to use logc for file logging or console logging.
For basic console logging use the following syntax:

`logc <log-type> <log-message>`

The `<log-type>`can either be error, warning and info. 
For `<log-message>` any string that represents a message is possible.

## TODOs

Further Development definied as User-Stories on this logging program:

### Implement the configuration in GNU/Linux Operating System

As a Linux User I want to configure the logger.xml file in `/etc/logc/` file, to
have a default place where to check regarding the configuration file.

### Differentiate the pattern `dated` and ``default`

As a user I want to have the choice to either log a message with the date or without to
have a flexible design.
Use a struct as the representation of the log line of the console.
