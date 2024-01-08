//Write a program which accept number from user and display its all non factors .
//INPUT :12
//OUTPUT:5 7 8 9 10 11
//INPUT :13
//OUTPUT:2 3 4 5 6 7 8 9 10 11 12
//INPUT :10
//OUTPUT:3 4 6 7 8 9
#include<stdio.h>
void NonFact(int iNo)
{
    int i=0;
    if (iNo<=0)
    {
        iNo=-iNo;
    }
    for (i = 2; i <iNo; i++)
    {
        if ((iNo%i)!=0)
        {
            printf("%d\t",i);
        }
        
    }

}
int main()
{
    int iValue =0;

    printf("Enter number...\n");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}