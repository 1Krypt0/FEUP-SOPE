#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        char* usr = getenv("USER");

        if(usr != NULL){
            printf("Hello %s!\n", usr);
        }
    }
    return 0;
}
