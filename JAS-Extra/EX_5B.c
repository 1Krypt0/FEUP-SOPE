#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This code prints the name of the USER environment variable */

int main(int argc, char *argv[], char *envp[]){
    if(argc == 1){
        for(int i = 0; envp[i] != NULL; i++){
            if(strncmp("USER=", envp[i], 5) == 0){
                printf("Hello ");
                for(int j = 5; *(envp[i] + j) != '\0'; j++){
                    printf("%c", *(envp[i] + j));
                }
                printf("!\n");
                break;
            }
        }
        return 0;
    }
}
