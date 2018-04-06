#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    printf("Hello, world!\n");

    printf("Passed argument count: %d\n", argc);

    int number;

    /* If no argument */
    if (argc <= 1) {
        /* Get argument */
        printf("No argument given. Enter arguemnt:\n");
        scanf("%d", &number);
    } else {
        number = atoi(argv[1]);
    }

    printf("Passed argument: %d\n", number);

    //pid_t process = fork();

    return 0;
}