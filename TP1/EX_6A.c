#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        if(open(argv[1]) == -1){
            printf("Error!\n");
        }
    }
    else fprintf(stderr, "More than 1 arg!\n");
    return 0;
}
