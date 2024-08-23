#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%s", &grade);

    switch(grade){
        case 'A':
            printf("Your grade is [A]");
            break;
        case 'B':
            printf("Your grade is [B]");
            break;
        case 'C':
            printf("Your grade is [C]");
            break;
    }

    return 0;
}
