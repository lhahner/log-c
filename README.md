# cla-collection - logc

This is a collection of programs for cross-cutting concerns in C. This means all these programs should handle expected functionalities as logging, error-handling or other.
The Road-Map below is [CLA-Associate ]{https://cppinstitute.org/cla}

One of the cross-cutteing concerns is logging. This program should implement an easy and custimzable logger in C.

## Files and streams

- **Files vs. streams**: Files are stored data which is physically written on the disk, while streams are just runtime values stored in a variable.
- **Header files needed for stream operations**: One is <stdio.h> other useful are <stdlib.h> or <signal.h> for general thing.
- **FILE structure**: The FILE struct is the actual file that should be created.
- **Opening and closing a stream**: open modes, errno variable,
- **Reading and writing** to/from a stream,
- **Predefined streams**: stdin, stdout and stderr,
- **Stream manipulation**: fgetc(), fputc(), fgets() and fputs() functions,
- **Raw input/output**: fread() and fwrite() functions.

## Preprocessor and complex declarations

- preprocessor,
- #include: how to make use of a header file,
- #define: simple and parameterized macros,
- #undef directive,
- predefined preprocessor symbols,
- macrooperators: # and ##,
- conditional compilation: #if and #ifdef directives,
- avoiding multiple compilations of the same header files,
- scopes of declarations, storage classes,
- user –defined types,
- pointers to functions,
- analyzing and creating complex declarations.

## Ideas & Todos for this codebase

1. Encryption: Vignere & Caesar, check `cryptlib`
2. Wifi Program, list connections: Libary `Network Manager`
3. Write a preprocessor file
