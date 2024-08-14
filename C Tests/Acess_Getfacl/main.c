#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <acl/libacl.h>
#include <acl/libacl.h>



void checar_permissoes(char *path){
    struct stat stats;

    acl_t acl;
    acl_entry_t entry;
    acl_permset_t permset;
    acl_tag_t tag;

    int permission;

    int result = stat(path, &stats);

    // Verifica se o diretório existe
    if (result == 0 && S_ISDIR(stats.st_mode)) {
        printf(path);
        printf("\n");
        printf("O diretório existe.\n");
    }
    else {
        printf("O diretório não existe.\n");
    }
    printf("\n\n\n");

    // Verifica permissões de execução para o dono, grupo e outros
    printf("Verificando permissões de execução para %s\n", path);
    if (access(path, X_OK) == 0) {
        printf("Permissão de execução: Permitida\n");
    }
    else {
        printf("Permissão de execução: Negada\n");
    }
    printf("\n\n\n");

    // Obtém as ACLs associadas ao arquivo/diretório
    acl = acl_get_file(path, ACL_TYPE_ACCESS);
    if (acl == NULL) {
        perror("acl_get_file");
        exit(EXIT_FAILURE);
    }
    printf("\n\n\n");

    printf("ACLs associadas ao %s:\n", path);
    int entry_id = ACL_FIRST_ENTRY;
    while (acl_get_entry(acl, entry_id, &entry) == 1) {
        entry_id = ACL_NEXT_ENTRY;

        acl_get_tag_type(entry, &tag);
        if (tag == ACL_USER_OBJ) {
            printf("User Obj: ");
        } else if (tag == ACL_USER) {
            printf("User: ");
        } else if (tag == ACL_GROUP_OBJ) {
            printf("Group Obj: ");
        } else if (tag == ACL_GROUP) {
            printf("Group: ");
        } else if (tag == ACL_OTHER) {
            printf("Other: ");
        }

        acl_get_permset(entry, &permset);
        permission = acl_get_perm(permset, ACL_EXECUTE);
        if (permission == 1) {
            printf("Permissão de execução: Permitida\n");
        } else {
            printf("Permissão de execução: Negada\n");
        }
    }
    printf("\n\n\n");

    acl_free(acl);
    printf("\n\n\n");

    printf("=== Nome: Wallace de Freitas Moura dos Santos === \n");
}

int main()
{
    checar_permissoes("/home/wallace/Área de trabalho/Notes");

    return 0;
}
