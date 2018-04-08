#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    printf("login-system\n");

    int file;
    char *inputLocation = "/tmp/login-async";
    char buffer[100];

    file = open(inputLocation, O_RDONLY);
    read(file, buffer, 100);
    printf("received: %s\n", buffer);
    close(file);

    return 0;
}