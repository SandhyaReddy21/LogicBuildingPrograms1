//Write a program which accept number from user and return summation of all its non factors .
//INPUT :12
//OUTPUT:50
//INPUT :10
//OUTPUT:37
#include<stdio.h>
int SumNonFact(int iNo)
{
     int i=0;
     int iSum=0;
    if (iNo<=0)
    {
        iNo=-iNo;
    }
    for (i = 2; i <iNo; i++)
    {
        if ((iNo%i)!=0)
        {
           iSum=iSum+i;
        }
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet=0; 
    printf("Enter number...");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}