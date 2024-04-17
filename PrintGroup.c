#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
    pid_t pid = getpid();
    pid_t gid = getpgid(pid);
    printf("ID del grupo del proceso: %d\n", gid);
    return 0;
}