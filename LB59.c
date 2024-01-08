//write a program which accept number from user and return multiplication of all digits.
//INPUT  : 2395
//OUTPUT : 270
//INPUT  : 1018
//OUTPUT : 8
//INPUT  : 9440
//OUTPUT : 144
//INPUT  : 922432
//OUTPUT : 864

#include<stdio.h>

int MultiDigits(int iNo)      
{
     int iCnt=1;
    int iDigit=0;
    while (iNo!=0)

    {
        iDigit=iNo%10;
        iCnt=iCnt*iDigit;
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

    iRet=MultiDigits(iValue);
    printf("%d",iRet);

    return 0;
}