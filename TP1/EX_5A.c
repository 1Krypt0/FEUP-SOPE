#include <stdio.h>

/* Function to check all of the programs command line arguments and environment variables */

int main(int argc, char *argv[], char *envp[]){
    if(argc != 1){
        printf("no arguments specified!\n");
        return 0;
    }    
    int i;
    
    printf("COMMAND LINE ARGUMENTS\n\n");

    for(i = 0; argv[i] != NULL; i++){
        printf("%s\n",argv[i]);
    }

    printf("\nENVIRONMENT VARIABLES\n\n");

    for(i = 0; envp[i] != NULL; i++){
        printf("%s\n", envp[i]);
    }

    return 0;
}
