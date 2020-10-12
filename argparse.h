#ifndef ARGPARSE_H
#define ARGPARSE_H

#include <stdio.h> 

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// reads n arguments from command line 
char* command_line_parse(int argn, char **argv); 

int get_bsize(char* argv);
int get_ascii(char* argv);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ARGPARSE_H */