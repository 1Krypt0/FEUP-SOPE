#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

// preparation for execve:
char *cmdline[] = { "sleep", "30", (void *)0 };
char *newenviron[] = { "USER=Linus", NULL };

int main() {
	pid_t id;
setbuf(stdout, NULL);	// to make sure printf() have no buffer so, nodelay!

printf("\nParent: %d. USER=%s", getpid(), getenv("USER"));

int status;
id = fork();
switch (id) {
	case -1:
		perror ("fork()");
		exit (1);
	case 0:	// child
        setenv("USER", "LINUS", 1);
		printf("\nChild: %d. USER=%s", getpid(), getenv("USER"));
		printf("\nChild: check that following exec was succeful with: \"ps x | grep sleep\"\n");
		if (execv("/bin/sleep", cmdline) == -1)
			perror("execve");
		printf("\nYou will not see this unless execve() fails! Know why?...\n");
		break;	// if execve fails...
	default:
        wait(&status);
		printf("\nParent still: %d. USER=%s\n", getpid(), getenv("USER"));
	}
return 0;
}
