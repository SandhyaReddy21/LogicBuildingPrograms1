//Accept two numbers from user and display first number in second number of times
//INPUT : 12 5
//OUTPUT : 12 12 12 12 12
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iint=0;
       if(iFrequency<0)
    {
        iFrequency=-(iFrequency);
    }
    for (iint=1;iint<=iFrequency;iFrequency--)
    {
       printf("%d\n",iNo);
    }
    
}
int main()
{
    int iValue=0;
    int iCount=0;
     
     printf("Enter number..");
     scanf("%d",&iValue);
     printf("Enter frequency...");
     scanf("%d",&iCount);
     Display(iValue,iCount);
    return 0;
}