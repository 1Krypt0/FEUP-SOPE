#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        if(open(argv[1]) == -1){
            perror("Error: ");
        }
    }
    else fprintf(stderr, "Wrong number of args!\n");
    return 0;
}
