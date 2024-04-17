#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
    pid_t parent_pid = getppid();

    printf("ID del proceso padre: %d\n", parent_pid);
    return 0;
}
