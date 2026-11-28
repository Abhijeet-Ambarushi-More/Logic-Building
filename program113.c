#include<stdio.h>

void Display(int Arr[])
{
    int iCnt = 0;

    // bad thing as we printing 8 elements when arrays size is 4 only
    // java will give array index out of bounds exception
    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[4] = {10,20,30,40};

    Display(Brr);

    return 0;
}