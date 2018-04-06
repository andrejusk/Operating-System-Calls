#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    printf("Hello, world!\n");

    printf("Passed argument count: %d\n", argc);

    int number;

    while (1) {
        /* Get argument */
        printf("Enter arguemnt (-1 to exit):\n");
        scanf("%d", &number);

        /* Exit condition */
        if (number < 0) {
            break;
        }


    }
    
    return 0;

}