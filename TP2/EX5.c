#include <stdlib.h>
#include <stdio.h>

int main(void){

    int pid = fork();

    if (pid != 0){
        waitpid(0);
        printf("World!\n");
    } else{
        printf("Hello ");
    }
    return 0;
}
