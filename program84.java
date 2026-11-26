// WAP to print digits of given number
// IMP - check which part of the code is not needed from the previous code and update every code

import java.util.*;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            iCount++;               // removed iDigit intializaiton and another line from here as its not needed
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program84
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       DigitX  dobj = new DigitX();

       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter number : ");
       iValue = sobj.nextInt();

       iRet = dobj.CountDigits(iValue);
       System.out.println("The number of digits are : "+iRet);
    }
}
