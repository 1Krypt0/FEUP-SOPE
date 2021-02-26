#include <stdlib.h>
#include <stdio.h>

int main(void){

    int pid = fork();

    if (pid != 0){
        printf("World: ");
    } else {
        printf("Hello!\n");
    }
    return 0;
}
