/*
 * C program to find Greatest Common Divisor (GCD) / Highest Common Factor (HCF) of two numbers.
 */
#include <stdio.h>

int main()
{
    int m,n,x;
    printf("Hello!\nI can help you find Greatest Common Divisor (GCD) / Highest Common Factor (HCF) of two numbers!\nTell me the first number: ");
    scanf("%i",&m);
    printf("Okay I have selected the number %i.\nTell me the second number?: ",m);
    scanf("%i",&n);
    /*while(n>0)
    {
        x=n;
        n=m%n;
        m=x;
    }
    printf("GCD: %i",m);*/
    x=(m>n)?n:m;
    for(;;--x)
        if(m%x==0 && n%x==0)
            break;
    printf("Common Divisor (GCD) / Highest Common Factor (HCF) is: %i\n\n",x);
    return 0;
}