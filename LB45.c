/*Write a program which accept area in square feet and convert it into square meter.
(1 square feet=0.0929 square meter)*/
//Input  : 5
//Output : 0.464515
//Input  : 7
//Output : 0.650321   
#include<stdio.h>
double SquareMeter(int iValue)
{
    double dSquMeter=0.0;
    dSquMeter=iValue*0.0929;
    return dSquMeter; 
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet..");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("Area of square meter is..%lf",dRet);
    return 0;
}