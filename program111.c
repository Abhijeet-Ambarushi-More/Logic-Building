#include<stdio.h>

void Display(int Arr[])
{
    int iCnt = 0;

    //           issue(5 is Hardcoded so only prints 5 out of 8)
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[8] = {10,20,30,40,50,60,70,80};

    Display(Brr);

    return 0;
}