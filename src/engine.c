#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./engine <cpu|memory|io>\n");
        return 1;
    }

    if (strcmp(argv[1], "cpu") == 0) {
        system("./cpu_hog");
    }
    else if (strcmp(argv[1], "memory") == 0) {
        system("./memory_hog");
    }
    else if (strcmp(argv[1], "io") == 0) {
        system("./io_pulse");
    }
    else {
        printf("Invalid option\n");
    }

    return 0;
}
