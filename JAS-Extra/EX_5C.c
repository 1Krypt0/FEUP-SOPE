#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Small program to salute the user of the current session */

int main(int argc, char *argv[]){
    if(argc == 1){
        char* usr = getenv("USER");

        if(usr != NULL){
            printf("Hello %s!\n", usr);
        }
        else{
            perror("There was a problem finding the user\n");
        }
    }
    return 0;
}
