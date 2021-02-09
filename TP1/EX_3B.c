#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Example of code given in the atexit man page, not altered to suit the exercise */

void bye(){
    printf("That was all, folks!\n");
}

int main(){
    long a;
    int i;
    
    a = sysconf(_SC_ATEXIT_MAX);
    printf("ATEXIT_MAX = %ld\n", a);
    
    i = atexit(bye);

    sleep(3);

    if (i != 0){
        fprintf(stderr, "cannot set exit function\n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
