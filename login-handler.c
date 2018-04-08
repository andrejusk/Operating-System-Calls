#include <stdio.h>
#include "ipc.h"

#define HEARTBEAT "H"

int main() {
    printf("Starting login-handler, waiting for login-system...\n");
    ipcSend(HEARTBEAT, sizeof(HEARTBEAT));

    printf("Detected login-system, verifying...\n");
    char buffer[sizeof(HEARTBEAT)];

    do {
        ipcReceive(buffer, sizeof(HEARTBEAT));
    } while (buffer[0] != HEARTBEAT[0]);

    printf("Verified login-system!\n");
    return 0;
}