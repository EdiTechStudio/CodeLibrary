/*
 * C program to find Least Common Multiple (LCM) of two numbers.
 */
#include <stdio.h>

int main()
{
    int m,n,x,p;
    printf("Hello!\nI can help you find Least Common Multiple (LCM) of two numbers!\nTell me the first number: ");
    scanf("%i",&m);
    printf("Okay I have selected the number %i.\nTell me the second number?: ",m);
    scanf("%i",&n);
    /*p=m*n;
    while(n>0)
    {
        x=n;
        n=m%n;
        m=x;
    }
    printf("LCM: %i",p/m);*/
    x=(m>n)?n:m;
    for(;;--x)
        if(m%x==0 && n%x==0)
            break;
    printf("Least Common Multiple (LCM) of %i and %i is: %i\n\n",m,n,m*n/x);
    return 0;
}