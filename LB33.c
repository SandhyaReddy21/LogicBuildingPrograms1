//Write a program to find factorial of given number.
//Input   : 5
//Output  : 120  (5*4*3*2*1)
//Input   : -5
//Output  : 120  (5*4*3*2*1) 
//Input   : 4
//Output  : 24   (4*3*2*1 )

#include<stdio.h>
int Factorial(int iNo)
{
    int ifact=1;
     int i=0;
     if (iNo<=0)
     {
        iNo=-iNo;
     }
     
    for (i = 1; i<=iNo; i++)
    {
          ifact=ifact*i;
        
    }
    return ifact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number...:");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial of number is %d ",iRet);
    return 0;
}//no