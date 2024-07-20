#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/mman.h>

int main() {
    // Criação de memória compartilhada
    int *shared_memory = mmap(NULL, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    *shared_memory = 0;

    pid_t pid = fork();

    if (pid == 0) {
        // Processo filho
        printf("Processo filho - Memória compartilhada: %d\n", *shared_memory);
        *shared_memory = 1;  // Modificar memória compartilhada
        printf("Processo filho - Memória compartilhada modificada: %d\n", *shared_memory);
    } else if (pid > 0) {
        // Processo pai
        wait(NULL);  // Espera o filho terminar
        printf("Processo pai - Memória compartilhada após modificação: %d\n", *shared_memory);
    } else {
        // Erro ao criar processo filho
        perror("fork");
        return 1;
    }

    // Liberação da memória compartilhada
    munmap(shared_memory, sizeof(int));

    return 0;
}

