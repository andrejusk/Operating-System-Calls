# Asynchronous Communication
The final task is to implement handshaking between two C programs. Some applications require services to be running for them to work. In this example, there will be a login-system application which requires a login-handler service to be running. Upon launch, login-system will attempt to exchange a message in both ways, i.e. handshake.

## Usage
Compiling requires linking with `ipc.c`

After compiling

`./login-handler`

`./login-system`

## Testing
Running `login-system` first:

![login-system](https://i.imgur.com/ulK8iRx.png)

Running `login-handler` afterwards:

![login-handler](https://i.imgur.com/vIQjW0C.png)

Works in reverse as well.