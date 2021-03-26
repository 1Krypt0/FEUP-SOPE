#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void *garbage_collected_malloc(size_t size) {
    void *p = malloc(size);
    return p;
}

int main(int argc, char **argv) {
    char *buf;
    int i;
    int size = strlen(argv[1]);

    if (argc < 2) {
      fprintf(stderr, "\nUsage: %s <string>\n", argv[0]);
      exit(1);
    }

    printf("Input string: %s\n", argv[1]);
    buf = (char *) garbage_collected_malloc(size);
    strncpy(buf, argv[1], size);

    for (i=0; i < size ; i++) {
      buf[i] = toupper(buf[i]);
    }

    printf("Output string: %s\n", buf);

    free(buf);
    return 0;
}
