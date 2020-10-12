#include "argparse.h"
#include <stdio.h>
#include <stdlib.h>


// Tarea: crear biblioteca que reciba un argumento, lo copie a una cadena y lo imprima
// que imprima el número de bytes
// que imprima el codigo ascii en forma decimal x0000001 --> 1

int main(int argn, char **argv){

    
    char* display = malloc(sizeof(argv[1]));
    display = command_line_parse(argn, argv);
    printf("%s\n", display);
    get_bsize(display);
    get_ascii(display);
    free(display);
    return 1;
}