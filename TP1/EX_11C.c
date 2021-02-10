#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        char buf;
        int fd_one;
        fd_one = open(argv[1], O_RDONLY);
        if(fd_one == -1){
            printf("Error opening file\n");
            return -1;
        }
        
        while(read(fd_one, &buf, 1)){
            printf("%c", buf);
        }
        
        close(fd_one);
    }
    if(argc == 3){

        char buf;
        int fd_one, fd_two;
        fd_one = open(argv[1], O_RDONLY);
        if(fd_one == -1){
            printf("Error opening first file\n");
            close(fd_one);
            return -1;
        }
    
        fd_two  = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

        while(read(fd_one, &buf, 1)){
             write(fd_two, &buf, 1);
        }

        close(fd_one);
        close(fd_two);
    }
    return 0;
}
