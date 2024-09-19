# logc - logging with C and Bash 
 
This is a collection of programs for cross-cutting concerns in C. This means all these programs should handle expected functionalities as logging, error-handling or other.
The Road-Map below is [CLA-Associate ]{https://cppinstitute.org/cla}

One of the cross-cutteing concerns is logging. This program should implement an easy and custimzable logger in C.
Surely there are multiple implementations that cover logging in C and this is just an alternative.
It takes the really good practices of log4j and implements them in C, like having a customizable logging file or implement it in C and in Shell-Skript.
https://mvnrepository.com/artifact/log4j/log4j.


## TODOs

Further Development definied as User-Stories on this logging program:

### Use as a formatter of logs in `bash` (implemented)

As a Linux User I want to run the program like: `logc "openssh is not installed, error"` to
recieve the output in the stdout like my specification in the configuration file. Like
`[ERROR] -- 16.09.2024 -- openssh is not installed`.

### Implement the configuration in GNU/Linux Operating System

As a Linux User I want to configure the logger.xml file in `/etc/logc/` file, to
have a default place where to check regarding the configuration file.

### Fix the time error

As a user I want that the program checks in which timezone I am currently located
and log the time accordingly, to use the program all over the world.
