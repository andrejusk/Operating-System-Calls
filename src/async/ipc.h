#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define PATH "/tmp/login-async"

void ipcSend(char *message, int size);
void ipcReceive(char *buffer, int size);