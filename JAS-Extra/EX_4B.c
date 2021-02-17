#include <stdio.h>

/*This program just salutes the person with the name given by the exercise */

int main(int argc, char* argv[]){
    if(argc == 2){
        printf("Hello %s !\n", argv[1]);
        return 0;
    }
    else if(argc > 2){
        printf("Hello");
        for(int i = 1; argv[i] != NULL; i++){
            printf(" %s", argv[i]);
        }
        printf("!\n");
        return 0;
    }
}
