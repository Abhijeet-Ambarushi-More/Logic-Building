// input : 5
// output : 1 2 3 4

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt += 1)        // this way is also right but not good programming practise
    {
        printf("%d\t",iCnt);                    // += is a short hand operator
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