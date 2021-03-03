/*
 *      Example of threads in action
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define NTHREADS 2

void *rot(void *a) {
    printf("Systems\n");
    pthread_exit(NULL);
}

void *func2(void* arg) {
    printf("Operating ");
    pthread_exit(NULL);
}

int main() {
    int status1, status2;
    pthread_t ids[NTHREADS];

    // new threads creation
    status1 = pthread_create(&ids[0], NULL, func2, NULL);
    status2 = pthread_create(&ids[1], NULL, rot, NULL);

    if (status1 != 0 || status2 != 0) {
		exit(-1);	// here, we decided to end process
    }
    else {
        pthread_join(ids[0], NULL);
    }

    pthread_exit(NULL);	// here, not really necessary...
    return 0;	// will not run this!
}

