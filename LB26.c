//Write a program which accept number from user and print that number of $ & *.
//Input   : 5
//Output  : $ *  $ *  $ *  $ *  $ * 
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    printf("$\t*\t",iCnt);
   }
}
int main()
{
    int iValue=0;
    printf("please number...:");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}