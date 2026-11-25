import java.util.Scanner;

// modified the program acc to protocol
class NumberX
{
    public int SumFactors(int iNo)
    {
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)       // reducing time complexity by reducing the extra loop iterations by half
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
}

class program49
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj  = new NumberX();
        nobj.SumFactors(iValue);

        iRet = nobj.SumFactors(iValue);

        System.out.println("Summation of factors : "+iRet);

    }
}

// Time Complexity : O(N/2)
// Where N > 0