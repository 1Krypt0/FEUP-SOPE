#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 3){
        char chr;

        FILE* fd_one = fopen(argv[1], "r");
        FILE* fd_two = fopen(argv[2], "w");
      
        while(1){
            chr = fgetc(fd_one);
            
            if(feof(fd_one)){
                break;
            }
            
            fputc(chr, fd_two);
        }
    }
    return 0;
}
