# Linguagem C

A linguagem C é amplamente utilizada no desenvolvimento de software para sistemas operacionais, especialmente no Linux. Aqui estão alguns pontos-chave para trabalhar com C no ambiente Linux:

### Instalação do Compilador
Para compilar programas em C no Linux, você precisará de um compilador como o GCC (GNU Compiler Collection). Você pode instalá-lo usando o gerenciador de pacotes da sua distribuição. Por exemplo:

- **Debian/Ubuntu:**
  ```sh
  sudo apt update
  sudo apt install build-essential
  ```

- **Fedora:**
  ```sh
  sudo dnf groupinstall "Development Tools"
  ```

### Estrutura Básica de um Programa em C
Um programa em C geralmente começa com a inclusão de bibliotecas e a definição da função `main`. Aqui está um exemplo simples de "Hello, World!":

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Compilação e Execução
Para compilar e executar um programa em C no Linux:

1. Salve o código acima em um arquivo chamado `hello.c`.
2. Abra o terminal e navegue até o diretório onde `hello.c` está salvo.
3. Compile o programa usando o GCC:
   ```sh
   gcc hello.c -o hello
   ```
4. Execute o programa compilado:
   ```sh
   ./hello
   ```

### Ferramentas Úteis
- **GDB (GNU Debugger):** Utilizado para depurar programas em C.
  ```sh
  sudo apt install gdb
  ```
- **Valgrind:** Ferramenta para análise de memória.
  ```sh
  sudo apt install valgrind
  ```

### Boas Práticas
- **Modularidade:** Divida seu código em funções e módulos para melhor organização e manutenção.
- **Documentação:** Comente seu código adequadamente.
- **Teste:** Sempre teste seu código extensivamente.

### Recursos Adicionais
- **Man Pages:** Use `man gcc` e `man gdb` no terminal para obter mais informações sobre o GCC e GDB.
- **Tutoriais e Livros:** "The C Programming Language" por Brian W. Kernighan e Dennis M. Ritchie é um clássico.
