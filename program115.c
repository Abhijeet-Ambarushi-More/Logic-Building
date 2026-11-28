#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;

    int Brr[iLength] = {10,20,30,40};   // Error...as the compiler wont know for sure if iLength has 4 

    Display(Brr,iLength);

    return 0;
}

// we can use macro #define iLength 4 and write int Brr[iLength] = {10,20,30,40};
// this will work because macros are used before compilation