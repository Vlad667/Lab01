#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float number;
    
    printf("number = ");
    scanf("%f", &number);
    
    printf("\n%3.2f\n", number);
    printf("\nExponential style = %e", number);
    printf("\n%3.7f\n", number);
    
    system("pause");
    return 0;
}

