#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[25];
    int age;

    printf("\nWhat'ss your name? ");
    scanf("%s", &name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    return 0;
}
