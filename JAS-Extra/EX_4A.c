#include <stdio.h>

/*This program just salutes the person with the name given by the exercise */

int main(int argc, char* argv[]){
    if(argc == 2){
        printf("Hello %s !\n", argv[1]);
        return 0;
    }
}
