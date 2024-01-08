//Write a program which accept total marks and obtained marks from user and calculate percentage.
//Input   : 1000  745
//Output  : 74.5%
#include<stdio.h>
float Percentage(int iMarks,int iTotal)
{
    //Handle the condition if number is 0
    if (iMarks<iTotal|| iMarks==0)
    {
        printf("Invalid Data");
        exit(0);
    }
    float fpercentage=0.0f;
    fpercentage=(((float) iMarks *iTotal)/100.0);
    return fpercentage;
}  
int main()
{
    int iValue1=0,iValue2=0;
    float fRet =0.0f;
    printf("please enter total marks...:");
    scanf("%d",&iValue1);
    printf("please enter obtained marks...:");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("Calculate percentage is..%f",fRet);
    return 0;
}