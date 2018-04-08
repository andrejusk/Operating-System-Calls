#include <stdio.h>
#include "ipc.h"

#define HEARTBEAT "H"

int main() {
    printf("Starting login-system, waiting for login-handler...\n");
    char buffer[SIZE];
    do {
        ipcReceive(buffer, SIZE);
    } while (buffer[0] != HEARTBEAT[0]);

    printf("Detected login-handler, verifying...\n");
    ipcSend(HEARTBEAT, sizeof(HEARTBEAT));

    printf("Verified to login-handler!\n");
    return 0;
}
