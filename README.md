# logc - logging with c and bash
 
This is a collection of programs for cross-cutting concerns in C. This means all these programs should handle expected functionalities as logging, error-handling or other.
The Road-Map below is [CLA-Associate ]{https://cppinstitute.org/cla}

One of the cross-cutteing concerns is logging. This program should implement an easy and custimzable logger in C.
Surely there are multiple implementations that cover logging in C and this is just an alternative.
It takes the really good practices of log4j and implements them in C, like having a customizable logging file.

## TODOs

Further Development definied as User-Stories on this logging program:

### Use as a formatter of logs in `bash`

As a Linux User I want to run the program like: `logc "openssh is not installed, error"` to
recieve the output in the stdout like my specification in the configuration file. Like
`[ERROR] -- 16.09.2024 -- openssh is not installed`.

### Implement the configuration in GNU/Linux Operating System

As a Linux User I want to configure the logger.xml file in `/etc/logc/` file, to
have a default place where to check regarding the configuration file.
