// can use counter to count how many digits the number has and the summation of the numbers

#include<stdio.h>

void DisplayDigits(int iNo)
{
        int iDigit = 0 ;

    while(iNo > 0)     // changed != with >
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}