void send(char *message, int size) {
    /* Open pipe */
    mkfifo(PATH, 0666);

    /* Write to pipe */
    int file = open(PATH, O_WRONLY);
    write(file, message, size);
    close(file);

    /* Wait for read */
    unlink(PATH);
}

void receive(char *buffer, int size) {
    /* Read pipe */
    int file = open(PATH, O_RDONLY);
    read(file, buffer, 100);
    printf("received: %s\n", buffer);
    close(file);
}