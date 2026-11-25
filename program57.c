// input : 8
// output : 1 3 5 7

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)        // this way is also right but not good programming practise
    {                                            //  8 wont get printed here as iCnt will be 9 when iNo is 8
        printf("%d\t",iCnt);                     // += is a short hand operator
    }

    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}