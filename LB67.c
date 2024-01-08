/*Accept N numbers from user and return differance between frequency of even number and odd numbers*/
//Input :  N :      7
//           Elements : 85 66 3 80 93 88 90
//Output   : 1(4-3)
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo) 
{   
    int iCnt = 0;
    int iEven=0;
    int iOdd=0;
    int iFrequency=0;
    

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(((Arr[iCnt]%2)==0)==iNo)
        {
          iEven ++;
        }
        if(((Arr[iCnt]%2)!=0)==iNo)
        {
          iOdd ++;
        }
        iFrequency=iEven-iOdd;      
    }
    return iFrequency;
}

int main()
{
    int iSize = 0,iRet=0,iCnt=0,iNo=0;
    int *p = NULL;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p= (int *)malloc(iSize * sizeof(int));
    
    if (p==NULL)
    {
       printf("Unable to allocate memory");
       return -1;
    }

    printf("Enter %d elements \n",iSize);
    for (iCnt= 0; iCnt<iSize;iCnt++)
    {
       printf("Enter elements %d  :  ",iCnt+1);
       scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize,iNo);
    printf("Result is %d ",iRet);
    free(p);
    return 0;
}