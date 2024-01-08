/*Write a program which accept number from user and return difference between 
summation of all its factors and non factors.*/
//INPUT :12
//OUTPUT:-34 (16-50)
//INPUT :10
//OUTPUT:-29(8-37)
#include<stdio.h>
int FactDiff(int iNo)
{
     int i=0,Fact=0,NonFact=0;

    for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            Fact+=i;
        }
        else
        {
            NonFact+=i;
        }
    }
    return Fact-NonFact;
}
int main()
{
    int iValue =0;
    int iRet=0; 
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}