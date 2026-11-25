// Type 3

import java.util.Scanner;

class NumberX           // we have written X in the end so it wont get confused if there is any class named Number in java library
{
    public static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0)&&(iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }  
}

class program44
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        bRet = NumberX.CheckDivisible(iValue);      // bad programming practice as object of NumberX class not created

        if(bRet == true)
        {
             System.out.println("Number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5");
        }
    }
}