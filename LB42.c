/*Write a program which accept width and hight of rectangle from user and calculate its area.
(Area=width*hight)*/
//Input  : 5.3   9.78
//Output : 51.834
#include<stdio.h>
double RectArea(float fWidth,float fHight)
{
   double Area=0.0;
   Area=((double)fWidth*(double)fHight);
   return Area;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("Enter width....");
    scanf("%f",&fValue1);
    printf("Enter hight...");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("Area of rectangle is..%lf",dRet);
    return 0;
}