//write a program which accept number from user and return count of even digits.
//INPUT  : 2395
//OUTPUT : 1
//INPUT  : 1018
//OUTPUT : 2
//INPUT  : -1018
//OUTPUT : 2
//INPUT  : 8462
//OUTPUT : 4

#include<stdio.h>

int CountEven(int iNo)      
{
    int iCnt=0;
    int iDigit=0;
    while (iNo!=0)

    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
           iCnt++;
        }
      
        iNo=iNo/10;
    }
    return  iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number..  ");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("%d",iRet);

    return 0;
}