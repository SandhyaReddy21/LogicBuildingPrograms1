/*Write a program which accept temperature infahrenheit and converts it into celsius
(1 celsius=(Fahrenheit-32)*(5/9))         */
//Input  : 10
//Output : -12.2222 (10-32) * (5/9)
//Input  : 34
//Output : 1.11111  (34-32) * (5/9) 
#include<stdio.h>
double FhtoCs(float fTemp)
{
    double celsius=0.0;
    celsius=(fTemp-32)*5/9;
    return celsius; 
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit...");
    scanf("%f",&fValue);
    dRet=FhtoCs(fValue);
    printf("celsius is..%lf",dRet);
    return 0;
}