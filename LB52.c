//write a program which accept number from user and check whether it contains 0 in it or not.
//INPUT  : 2395
//OUTPUT : There is no zero
//INPUT  : 1018
//OUTPUT : It Contains Zero

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int Bool;
Bool ChkZero(int iNo)
{  
    int iDigit=0;
    while (iNo!=0)

    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        if(iDigit==0)
        {
            return TRUE;
        }
      
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;
    Bool bRet=FALSE;

    printf("Enter number..  ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if (bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}