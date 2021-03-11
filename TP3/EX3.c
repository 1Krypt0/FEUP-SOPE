#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid;
    pid_t pid2;

    pid = fork();

    switch(pid) {
        case -1:
            perror("fork");
            break;
        case 0:
            printf("I am the child of %d with PID %d\n", getppid(), getpid());
            printf("I belong to the group with ID %d\n", getpgrp());
            pid2 = fork();
    
            switch(pid2) {
                case -1:
                    perror("fork");
                    break;
                case 0:
                    printf("I am the child of %d, and i have a PID of %d\n", getppid(), getpid());
                    printf("I belong with the group with ID %d\n", getpgrp());
                    break;
                default:
                    printf("I am the parent of someone and my PID is %d\n", getpid());
                    break;
            }

            break;
        default:
            printf("I am the grandparent with PID: %d\n", getpid());
            printf("Also, my group has the ID %d\n", getpgrp());
            break;
    }

    return 0;
}
