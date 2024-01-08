//Write a program to find even factorial of given number.
//Input   : 5
//Output  : 8     (4*2)
//Input   : -5
//Output  : 8     (4*2)
//Input   : 10
//Output  : 3840  (10*8*6*4*2)

#include<stdio.h>
int EvenFactorial(int iNo)
{
     int ifact=1;
     int i=0;
       if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i = 1; i<=iNo; i++)
    {
        if ((i%2)==0)
        {
          ifact=ifact*i;
        }
        
    }
    return ifact;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number ...:");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("Even factorial of number is %d  ",iRet);
    return 0;
}//no