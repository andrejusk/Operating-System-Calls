#include <stdio.h>
#include <ipc.h>

#define HEARTBEAT "heartbeat"

int main() {
    printf("login-handler\n");
    send(HEARTBEAT, sizeof(HEARTBEAT));
    return 0;
}