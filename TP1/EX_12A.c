#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]){
    if(argc == 2){
 
        DIR *dir;
    
        struct dirent *dirEnt;

        dir = opendir(argv[1]);

        if(dir == NULL){
            printf("Cannot open directory '%s'\n", argv[1]);
            return -1;
        }

        while((dirEnt = readdir(dir)) != NULL){
                printf("%s\n", dirEnt->d_name);
        } 

        closedir(dir);

    }
    return 0;
}
