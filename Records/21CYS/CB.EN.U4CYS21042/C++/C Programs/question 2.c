#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;
    pid = fork();
    if(pid == 0)
    printf("Child Parent Process ID: %d\n", getpid());
    else
    printf("Process ID: %d\n", getpid());
    return 0;
}