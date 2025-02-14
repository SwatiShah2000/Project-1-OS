#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    int num_processes = 5;

    for (int i = 0; i < num_processes; i++) {
        pid_t pid = fork();

        if (pid == 0) {

            printf("Child process %d created with PID: %d\n", i, getpid());

            sleep(rand() % 5 + 1);
            exit(0);
        } else if (pid > 0) {
        } else {
            perror("Fork failed");
            exit(1);
        }
    }


    for (int i = 0; i < num_processes; i++) {
        wait(NULL);
    }

    printf("All child processes have finished.\n");

    return 0;
}
