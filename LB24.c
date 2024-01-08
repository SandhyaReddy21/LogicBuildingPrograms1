//Write a program which accept three numbers and print its multiplication.
//Input   : 5 4 7
//Output  : 140
//Input   : 5 0 7
//Output  : 35
//Input   : 5 0 0
//Output  : 5
//Input   : 0 0 0
//Output  : 0
#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{
    //Handle the condition if number is 0
    int iSum=0; 
    { 
    //int iSum=0;
      iSum=iNo1*iNo2*iNo3;
    }
    return iSum;
}     
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    printf("please enter three numbers...:");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication of numbers is..%d",iRet);
    return 0;
}