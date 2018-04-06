#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long calculateFibonacci(int num) {
    /* Base case */
    if (num < 1) {
        return 0;
    } else if (num < 2) {
        return 1;
    }
    /* Recurse */ 
    else {
        return calculateFibonacci(num - 1) + calculateFibonacci(num - 2);
    }
}

int main(int argc, char *argv[]) {
    int number;
    while (1) {
        /* Get argument */
        printf("Enter arguemnt (-1 to exit):\n");
        scanf("%d", &number);
        /* Exit condition */
        if (number < 0) {
            break;
        }
        pid_t pid = fork();
        /* Child process */
        if (pid == 0) {
            unsigned long fibonacci = calculateFibonacci(number);
            printf("Child process returned: f(%d) = %lu\n", number, fibonacci);
            return 0;
        }
        /* Parent process */ 
        else if (pid > 0) {
            printf("Continuing parent process... ");
        }
        /* Failed to create */
        else if (pid < 0) {
            printf("Failed to create child process.\n");
            return 1;
        }
    }
    return 0;
}
