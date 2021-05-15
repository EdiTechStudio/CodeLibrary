/*
 * C program to print all Armstrong numbers between a given range
 */
#include <stdio.h>
int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{
    int start, end;

    printf("Hello!\nI can help you find strong numbers between an interval of two integer numbers!\n");
    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &end);
    
    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);
    
    return 0;
}

int isArmstrong(int num)
{
    int temp, lastDigit, sum;
    
    temp = num;
    sum = 0;

    while(temp != 0)
    {
        lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }

    if(num == sum)
        return 1;
    else 
        return 0;
}

void printArmstrong(int start, int end)
{
    while(start <= end)
    {
        if(isArmstrong(start)) 
        {
            printf("%d\n", start);
        }
        
        start++;
    }
    printf("\n");
}
