/* Primary implementation of functions defined in argparse.h */
#include "argparse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char error[35] = "Error: please provide an argument.";

char* command_line_parse(int argn, char **argv){
    char* mystring;
    if (argn < 2){
        return error;
    }

    // printf("%s\n", argv[1]);
    mystring = malloc(sizeof(argv[1]));
    sprintf(mystring, "%s", argv[1]);
    return mystring;
}

int get_bsize(char* a){
    printf("%lu\n", strlen(a));
    return 1;
}

int get_ascii(char* a){
    for(int i=0; i<strlen(a); i++){
    printf("%d ", a[i]);
    }
    printf("\n");
    return 1;
}
