#include <stdio.h>
#include <stdlib.h>

/*This program just salutes the person with the name given by the shell and in the number of times specified */

int main(int argc, char* argv[]){
    if(argc >= 2){
        int rep = 0;
        for(int i = 1; argv[i] != NULL; i++){
            if(atoi(argv[i])){
                rep = atoi(argv[i]);
            }
        }
        for(int i = 0; i < rep; i++){
            printf("Hello");

            for(int i = 1; argv[i + 1] != NULL; i++){
                printf(" %s", argv[i]);
            }

            printf("!\n");
        }
        return 0;
    }
}
