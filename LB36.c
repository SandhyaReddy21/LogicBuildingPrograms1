//Write a program which accept number from user and print that number of $ & *.
//Input   : 5
//Output  : * * * * * # # # # # 
#include<stdio.h>
int Display(int iNo)
{
    int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
      {
        printf("*\t",iCnt);
      }
       for(iCnt=1;iCnt<=iNo;iCnt++)
      {
        printf("#\t",iCnt);
      }
}
int main()
{
    int iValue=0;
    printf("Enter number...:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}