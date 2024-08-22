#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    if(age < 18){
        printf("You're a kid");
    }

    else if(age == 24){
        printf("You are %d years old", age);
    }

    else{
        printf("Very old");
    }
    return 0;
}
