#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define errExit(msg) do { perror(msg); exit(EXIT_FAILURE); \
                               } while (0)

static void sigintHandler(int sig)
{
    write(STDERR_FILENO, "Caught SIGINT!\n", 15);
}

int main(int argc, char *argv[]) {
    if (signal(SIGINT, sigintHandler) == SIG_ERR)
        errExit("signal SIGINT");

    while (1) {
        fprintf(stderr, "%d", 0);
        sleep(3);
    }

    exit(EXIT_SUCCESS);
}
