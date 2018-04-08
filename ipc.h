#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define PATH "/tmp/login-async"

void send(char *message, int size);
void receive(char *buffer, int size);