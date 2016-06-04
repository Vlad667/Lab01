#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float nomer;
    
    printf("nomer = ");
    scanf("%f", &nomer);
    
    printf("\n%3.2f\n", nomer);
    printf("\nExponential style: %e", nomer);
    printf("\n%3.7f\n", nomer);
    
    system("pause");
    return 0;
}

