/*Accept N number from user and return difference between summation of even elements and summation of odd elements*/
//Input :  N :      6
//           Elements : 85 66 3 80 93 88
//Output   : 53  (234-181)
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength) 
{   
    int iCnt = 0;
    int iEven= 0;
    int iOdd= 0;
    int iDiff=0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt] %2)==0)
        {
           iEven=iEven+Arr[iCnt];
        }
        if((Arr[iCnt] %2)!=0)
        {
          iOdd=iOdd+Arr[iCnt];
        }
        iDiff=iEven-iOdd;
    }
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt=0;
    int *p = NULL;

    printf("Enter number of elements...: ");
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
       printf("Enter elements %d   :",iCnt+1);
       scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Result is %d\n",iRet);
    free(p);
    return 0;
}