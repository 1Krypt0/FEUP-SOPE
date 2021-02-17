#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This small piece of code prints the environment variable specified by USER_NAME */

int main(int argc, char *argv[]){
    if(argc == 1){
        char* usr = getenv("USER_NAME");

        if(usr != NULL){
            printf("Hello %s!\n", usr);
        }
    }
    return 0;
}
