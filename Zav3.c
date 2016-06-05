#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nomer;
    
    printf("Vvedite nomer = ");
    scanf("%d" ,&nomer);
    
    printf ("\n\tExponential style = %e", nomer);
    printf ("\n\tEight style = %o", nomer);
    printf ("\n\tSixteen style = %x", nomer);
	
	system("pause");
    return 0;
}
