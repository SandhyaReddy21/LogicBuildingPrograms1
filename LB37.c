//Accept amount in US doller and return its corresponding value inIndian currency.Consider 1$ as 70 rupees.
//Input   : 10
//Output  : 700
//Input   : 3
//Output  : 270 
//Input   : 1200
//Output  : 840000

#include<stdio.h>
int DollarToINR(int iNo)
{
    int iAns=0;
    iAns=iNo*70;
    return iAns;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number of USD...:");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value in INR is %d ",iRet);
    return 0;
}