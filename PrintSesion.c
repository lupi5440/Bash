#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = getpid();
    pid_t sid = getsid(pid);
    
    printf("ID del proceso: %d\n", pid);
    printf("ID de la sesión: %d\n", sid);
    
    return 0;
}
