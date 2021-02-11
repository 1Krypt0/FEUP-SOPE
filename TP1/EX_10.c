#include <stdio.h>
#include <stdlib.h>
int main(){

    for(int i = 0; i < 100000; i++){
        printf("Hello, World!");
    }

    system("bash -c \" time ./EX_10.c \"");
    
    return 0;
}
