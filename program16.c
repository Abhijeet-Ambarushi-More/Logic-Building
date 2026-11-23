#include<stdio.h>
#include<stdbool.h>     // To use boolean in C language

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)      // here we put the value which was being stored in iRemainder in previous program
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if (bRet == true)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    return 0;
}