#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main() {
    uid_t user_id = getuid();
    struct passwd *user_info = getpwuid(user_id);
    
    if (user_info != NULL) {
        printf("Nombre de usuario: %s\n", user_info->pw_name);
        printf("Directorio Home: %s\n", user_info->pw_dir);
        printf("UID: %d\n", user_info->pw_uid);
        printf("GID: %d\n", user_info->pw_gid);
    } else {
        printf("No se pudo obtener la información del usuario.\n");
    }
    
    return 0;
}
