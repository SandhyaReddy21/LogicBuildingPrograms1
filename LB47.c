/*Write a program which accept rang from user and display all numbers in between that range*/
//Input  : 23  35
//Output : 24 25 26 27 28 29 30 31 32 33 34 
//Input  : -10  2
//Output : -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 
//Input  : 90  18
//Output : Invalid range

#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
     int i=0;
    if(iStart > iEnd)
    {
        printf("Invalid Range !!!");
    }
    for(i=iStart+1;i<iEnd;i++)
    { 
       printf("%d\t",i);
    }
    
}
int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter starting point....");
    scanf("%d",&iValue1);
    printf("Enter ending point....");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    return 0;
}