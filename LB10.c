//Accept number from user and check wether number is even or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    int ans=0;
     ans=iNo%2;
      if(ans==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
     
     printf("enter number...\n");
     scanf("%d",&iValue);
     
     bRet=ChkEven(iValue);
     //Display result
       if(bRet==TRUE)
    {
        printf("number is even...\n");
    }
    else
    {
        printf("number is odd...\n");
    }
    return 0;
}