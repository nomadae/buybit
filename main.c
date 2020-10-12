#include "argparse.h"
#include <stdio.h>
#include <stdlib.h>

/*

TAREA 1: 
crear biblioteca que reciba un argumento, 
lo copie a una cadena y lo imprima
que imprima el número de bytes
que imprima el codigo ascii en forma decimal 

TAREA 2: 
como hace un cast de char a antero
apuntador de enteros 
direccion de memoria
valor en la direccion de memoria

*/

int main(int argn, char **argv){

    char* display;
    display = malloc(sizeof(argv[1]));
    
    display = command_line_parse(argn, argv);
    printf("%s\n", display);
    get_bsize(display);
    get_ascii(display);
    free(display);
    return 1;
}

