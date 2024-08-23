#include <stdio.h>
#include <stdlib.h>

void print_text(){
    printf("=========== Function print_text ===========");
}

void function_with_args(char name[], int age){
    printf("Name: %s\nAge: %d\n", name, age);
}

int function_with_return(int num1, int num2){
    return num1 + num2;
}

int function_with_ternary(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    //print_text();

    char name[] = "Wallace";
    int age = 24;

    //function_with_args(name, age);

    //printf("Equals: %d", function_with_return(5, 5));

    printf("Max Number: %d", function_with_ternary(5, 10));

    return 0;
}
