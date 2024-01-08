//Write a program which accept number from user and display its multiplication of factors.
//INPUT :12
//OUTPUT:144      (1*2*3*4*6)
//INPUT :13
//OUTPUT:1        (1)
//INPUT :10
//OUTPUT:10      (1*2*5)
#include<stdio.h>
int MultFact(int iNo)
{
     int iCnt=0;
     int iFact=1;
     if (iNo<0)
     {
        iNo=-iNo;
     }
     
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        if ((iCnt%2)==0)
        {
            iFact=iFact*iCnt;
        }
        
    }
    return iFact;
}
int main()
{
    int iValue =0;
    int iRet   =0;

    printf("Enter number.....");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("Multiplication of factors are :%d",iRet);
    return 0;
}