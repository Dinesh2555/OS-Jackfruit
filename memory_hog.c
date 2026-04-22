#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CHUNK_SIZE (10 * 1024 * 1024) // 10 MB

int main() {
    int count = 0;

    while (1) {
        void *ptr = malloc(CHUNK_SIZE);

        if (ptr == NULL) {
            printf("Memory allocation failed at %d MB\n", count * 10);
            break;
        }

        // Touch memory to ensure allocation
        for (int i = 0; i < CHUNK_SIZE; i += 4096) {
            ((char *)ptr)[i] = 1;
        }

        count++;
        printf("Allocated %d MB\n", count * 10);
        sleep(1);
    }

    return 0;
}
