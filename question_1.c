/*
 * C program to print all prime numbers between a given range
 */
#include <stdio.h>

int factsum(int m)
{
    int i,r,s=0;
    while(m>0)
    {
        r=1;
        for(i=m%10;i>1;--i)
            r*=i;
        s+=r;
        m/=10;
    }
    return s;
}

int main()
{
    int m,n;
    printf("Hello!\nI can help you find strong numbers between an interval of two integer numbers!\nStart: ");
    scanf("%i",&m);
    printf("Okay I will start from %i. Where should I end?\nStop: ",m);
    scanf("%i",&n);
    printf("Great! These are the strong numbers I could find between the interval of %i to %i:\nResults: ",m,n);
    for(++n;m<n;++m)
        if(factsum(m)==m)
            printf("%i,",m);
    printf("\b ");
    printf("\n\n");
    return 0;
}