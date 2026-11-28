#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("The %d elements are : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;
    int iCnt =0;

    int Brr[iLength];
    
    printf("Enter the %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr,iLength);

    return 0;
}