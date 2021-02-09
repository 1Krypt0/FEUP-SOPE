#include <stdio.h>

/* Function to check all of the programs environment variables passed as command line arguments*/

int checkSubstring(char *a, char*b){

    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] != b[i]){
            return -1;
        }
    }
    return 0;
}


int main(int argc, char *argv[], char *envp[]){
    
   for(int i = 1; argv[i] != NULL; i++){
        for(int j = 0; envp[j] != NULL; j++){
            if(checkSubstring(argv[i], envp[j]) == 0){
                printf("%s\n", envp[j]);
            } 
        }
    }
    return 0;
}
