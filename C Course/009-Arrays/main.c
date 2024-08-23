#include <stdio.h>
#include <stdlib.h>

int main()
{
    double prices[4] = {5.0, 10.0, 15.0};
    prices[3] = 20.0;

    // printf("%lf", prices[0]);

    // PRINTING A ARRAY
    for(int i= 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
