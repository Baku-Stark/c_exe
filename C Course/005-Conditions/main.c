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

    else if(age >= 24 && age <= 59){
        printf("You are %d years old", age);
    }

    else if(age == 60 || age == 65){
        printf("Very old")
    }

    else{
        printf("Very Very old");
    }
    return 0;
}
