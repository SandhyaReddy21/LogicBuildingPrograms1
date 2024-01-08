//Write a program which accept number from user and display its factors in decreasing order.
//INPUT :12
//OUTPUT:6 4 3 2 1
//INPUT :13
//OUTPUT:1        
//INPUT :10
//OUTPUT:5 2 1  
#include<stdio.h>
void FactRev(int iNo)
{
      int i =1;
    for ( i =iNo;i>=1; i--)
    {
        if ((iNo%i)==0)
        {
            printf("%d\n",i);
        
        }
        
    }
    

}
int main()
{
    int iValue =0;

    printf("Enter number");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}