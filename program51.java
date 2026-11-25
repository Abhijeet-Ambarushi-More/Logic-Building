import java.util.Scanner;

class NumberX
{
    public boolean CheckPerfect(int iNo)
    {
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum > iNo)  // if the factors addition is greater than the number then it wont be perfect number, reduces iterationns
        {
            break;
        }
    }
    
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
}

class program51
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj  = new NumberX();
        nobj.CheckPerfect(iValue);

        bRet = nobj.CheckPerfect(iValue);

        if (bRet == true)
        {
            System.out.println("It is perfect");
        }
        else
        {
            System.out.println("It is not perfect");
        }
    }
}

// Time Complexity : O(N/2)
// Where N > 0