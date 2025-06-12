///////////////////////////////////////////////////////////////////////////
/// Name: CirleArea
/// Description: Accepts radius and calculate it's area
/// Input: float
/// Output: float
/// Date: 19-05-2025
/// Author: Ritesh Jillewad
///////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Circle
{
    public double CircleArea(double fRadius)
    {
        final double PI = 3.1;
        double fArea = (PI * fRadius * fRadius);
        return fArea;
    }
}

class question_1
{
    public static void main(String R[])
    {
       Scanner sobj = new Scanner(System.in);
       double dValue = 0.0;
       double dRet = 0.0;
       
       System.out.println("Enter Radius of Circle:");
       dValue = sobj.nextDouble();
       
       Circle cobj = new Circle();
       dRet = cobj.CircleArea(dValue);
       System.out.println("The Area of Circle is: " + dRet);

       sobj.close();
    }
}