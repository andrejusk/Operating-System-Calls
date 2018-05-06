# Concurrency, Processes and Threads
This task is written to implement a sample zero-downtime service. Most applications that do this use forks, e.g. the main process listens to a TCP socket and forks on every new connection [[1]](https://stackoverflow.com/questions/1345320/applications-of-fork-system-call). In this example, the task to be performed in a fork is to calculate the Fibonacci number sequence, while the main process listens for user input. 

## Usage
After compiling

`./fibonacci-fork`

Then enter number to calculate.

## Testing
Short tasks are completed quickly.

![Short tasks](https://i.imgur.com/Mijhg7G.png)

Longer tasks are completed later, interface remains responsive.

![Longer tasks](https://i.imgur.com/iIxGBj2.png)