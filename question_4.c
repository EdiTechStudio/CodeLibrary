/*
 * C program to find if a given number is Palindrome.
 */
#include <stdio.h>

int main()
{
    int n,r,x=1;
    printf("Hello!\nI can help you check whether a number is palindrome or not!\nDon't worry! I will follow the guidelines and will calculate it without using Array\nGive me a number: ");
    scanf("%i",&n);
    for(r=n/10;r>0;r/=10)
        x*=10;
    while(n>9)
    {
        if(n/x!=n%10)
        {
            printf("\nNope! This number is not a palindrone.\n\n");
            return 0;
        }
        n%=x;
        n/=10;
        x/=100;
    }
    printf("\nGreat! This number is a palindrone!!\n\n");
    return 0;
}
