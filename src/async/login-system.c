#include <stdio.h>
#include "ipc.h"

#define HEARTBEAT "H"

int main() {
    printf("Starting login-system, waiting for login-handler...\n");
    char buffer[sizeof(HEARTBEAT)];
    do {
        ipcReceive(buffer, sizeof(HEARTBEAT));
    } while (buffer[0] != HEARTBEAT[0]);

    printf("Detected login-handler, verifying...\n");
    ipcSend(HEARTBEAT, sizeof(HEARTBEAT));

    printf("Verified to login-handler!\n");
    return 0;
}
