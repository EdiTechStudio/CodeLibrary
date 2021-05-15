/*
 * C program to print all perfect numbers between a given range
 */
#include <stdio.h>

int divsum(int m)
{
    int i,s=0;
    for(i=1;i<m/2+1;++i)
        if(m%i==0)
            s+=i;
    return s;
}

int main()
{
    int m,n;
    printf("Hello!\nI can help you find perfect numbers between an interval of two integer numbers!\nStart: ");
    scanf("%i",&m);
    printf("Okay I will start from %i. Where should I end?\nStop: ",m);
    scanf("%i",&n);
    printf("Great! These are the perfect numbers I could find between the interval of %i to %i:\nResults: ",m,n);
    if(m==0)
        ++m;
    for(++n;m<n;++m)
        if(divsum(m)==m)
            printf("%i,",m);
    printf("\b ");
    printf("\n\n");
    return 0;
}