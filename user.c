#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("DEBUG: Process started\n");
    fflush(stdout);

    printf("This is a user process with PID: %d\n", getpid());
    sleep(rand() % 5 + 1);

    return 0;
}
