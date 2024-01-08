/*Write a program which accept distance in kilometer and convert it into meter.(1 kilometer=1000 meter)*/
//Input  : 5
//Output : 5000
//Input  : 12
//Output : 12000    
#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iAns=0;
   iAns=iNo*1000;
   return iAns; 
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter distance");
    scanf("%d",&iValue);
    iRet=KMtoMeter(iValue);
    printf("Area of circle is..%d",iRet);
    return 0;
}