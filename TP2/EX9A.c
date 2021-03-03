/*
 *      Example of threads in action
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define NTHREADS 3

void *rot(void *a) {
    printf("Hello friends. Greetings from thread %d\n", a);
    int ret = (int) a * (int)a;
    printf("I am thread %d and double of that is %d\n", a, ret);
    pthread_exit((void *) ret);
}

int main() {
    int i, status; //thread counter
    pthread_t ids[NTHREADS];

    printf("\nMain thread PID: %d ; TID %lu. \n", getpid(), (unsigned long) pthread_self());

    // new threads creation
for(i=0; i<NTHREADS; i++) {
    printf("Main here, going to create thread %d\n", i);
    status = pthread_create(&ids[i], NULL, rot, (void *)i);
	if (status != 0)
		exit(-1);	// here, we decided to end process
	else
		printf("\nNew thread %d ; TID: %lu.", i, (unsigned long) ids[i]);
	}
// wait for finishing of created threads
for(i=0; i<NTHREADS; i++) {
	pthread_join(ids[i], NULL);	// Note: threads give no termination code
	printf("\nTermination of thread %d: %lu.", i, (unsigned long)ids[i]);
	}

printf("\n");
pthread_exit(NULL);	// here, not really necessary...
return 0;	// will not run this!
}

