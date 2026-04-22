#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 1024

int main() {
    FILE *fp;
    char buffer[SIZE];

    for (int i = 0; i < SIZE; i++) {
        buffer[i] = 'A';
    }

    while (1) {
        fp = fopen("temp_io.txt", "w");

        if (fp == NULL) {
            perror("File open failed");
            return 1;
        }

        for (int i = 0; i < 1000; i++) {
            fwrite(buffer, 1, SIZE, fp);
        }

        fclose(fp);
        printf("I/O pulse written\n");

        sleep(1);
    }

    return 0;
}
