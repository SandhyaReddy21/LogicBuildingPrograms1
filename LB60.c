//write a program which accept number from user and return differance between summation of even digits and summation of odd digits.
//INPUT  : 2395
//OUTPUT : -15  (2-17)
//INPUT  : 1018
//OUTPUT : 6     (8-2)
//INPUT  : 8440
//OUTPUT : 16    (16-0)
//INPUT  : 5733
//OUTPUT : -18   (0-18)

#include<stdio.h>

int CountDiff(int iNo)      
{
     int iCnt1=0;
     int iCnt2=0;
     int iDiff=0;
    int iDigit=0;
    while (iNo!=0)

    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
           iCnt1=iCnt1+iDigit;
        }
        if((iDigit%2)!=0)
        {
            iCnt2=iCnt2+iDigit;
        }
         iNo=iNo/10;
         iDiff=iCnt1-iCnt2;
       // printf("%d",iDiff);
    }
    return  iDiff;
   
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number..  ");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}