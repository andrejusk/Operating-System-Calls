#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int calculateFibonacci(int number) {
    /* Base case */
    if (number <= 2) {
        return 1;
    }
    /* Recurse */ 
    else {
        return calculateFibonacci(number - 1) + calculateFibonacci(number - 2);
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
            /* Calculate fibonacci */
            int fibonacci = calculateFibonacci(number);
            printf("Child process returned: %d\n", fibonacci);
            return 0;
        }

        /* Parent process */ 
        else if (pid > 0) {
            /* Continue serving */
            printf("Parent process: ");
        }

        /* Failed to create */
        else if (pid < 0) {
            printf("Failed to create child process.\n");
            return 1;
        }


    }
    
    return 0;

}