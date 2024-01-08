//Accept number of rows and number of columns from user and display below pattern.
//Input   :    iRow=5    iCol=5
//Output  :   2   4   6   8  10
//            1   3   5   7  9
//            2   4   6   8  10
//            1   3   5   7  9

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i=0;
   int j=0;
   int k=0;

    for (i = 1; i<=iRow; i++)
    {
    
      for (j = 1,k=1; j<=iCol; j++,k++)
      {  
      if ((i%2)==0)
        {
           printf("%d\t",k);
           k++;
        }
        else
        {
          printf("%d\t",j*2);
        }
      }
      printf("\n");
    }
}
int main()
{
    int iValue1=0 ,iValue2=0;

    printf("Enter number of rows and columns..");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}