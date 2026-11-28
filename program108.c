#include<stdio.h>

void Display(int Arr[])    // iPtr[] will act as array so writing Arr[] instead
{
    printf("%d\n",*Arr);    //changed *ptr to *Arr

    Arr++;
    
    printf("%d\n",*Arr);

    Arr++;
    
    printf("%d\n",*Arr);
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    Display(Brr);

    return 0;
}