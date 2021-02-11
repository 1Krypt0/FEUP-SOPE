#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        if(open(argv[1]) == -1){
            fprintf(stderr, "Falhaste tanso\n");
        }
    }
    else fprintf(stderr, "Wrong number of arguments given\n");
    return 0;
}
