#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // ====== SIMPLE WHILE LOOP
    int i = 1;

    while(i < 10){
        printf("Hello world!\n");
        i ++;
    }

    // ====== DO-WHILE LOOP
    do{
        printf("Hello world!\n");
        i ++;
    }while(i < 20);

    // ====== INFINITY WHILE LOOP
    while(true){
        printf("Hello world!\n");
    }
    return 0;
}
