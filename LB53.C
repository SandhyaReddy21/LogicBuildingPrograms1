//write a program which accept number from user and count frequency of 2 in it.
//INPUT  : 2395
//OUTPUT : 1
//INPUT  : 1018
//OUTPUT : 0
//INPUT  : 922432
//OUTPUT : 3

#include<stdio.h>

int CountTwo(int iNo)      
{
    int iCnt=0;
    int iDigit=0;
    while (iNo!=0)

    {
        iDigit=iNo%10;
        if(iDigit==2)
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

    iRet=CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}