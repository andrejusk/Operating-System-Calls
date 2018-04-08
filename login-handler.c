#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    printf("login-handler\n");

    int file;
    char *outputLocation = "/tmp/login-async";

    mkfifo(outputLocation, 0666);

    file = open(outputLocation, O_WRONLY);
    write(file, "heartbeat", sizeof("heartbeat"));
    close(file);

    unlink(outputLocation);

    return 0;
}