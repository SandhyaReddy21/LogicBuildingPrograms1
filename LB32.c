//Accept single digit number from user and print it into word.
//Input   : 9
//Output  : Nine  
//Input   : -3
//Output  : Three  
//Input   : 12
//Output  : Invalid input

#include<stdio.h>
void Display(int iNo)
{
    if (iNo<0)
    {
      iNo=-iNo;
    }    
    
    switch(iNo)
    {
        case 0: 
            printf("ZERO");
            break;
        case 1: 
            printf("ONE");
            break;
        case 2: 
            printf("TWO");
            break;
        case 3: 
            printf("THREE");
            break;
        case 4: 
            printf("FOUR");
            break; 
        case 5: 
            printf("FIVE");
            break;
        case 6: 
            printf("SIX");
            break;
        case 7: 
            printf("SEVEN");
            break;
        case 8: 
            printf("EIGHT");
            break;
        case 9: 
            printf("NINE");
            break; 
        default:
            printf("INVALID NUMBER PLEASE ENTER SINGLE DIGIT NUMBER ");
    }
  
}

int main()
{
    int iValue=0;
    printf("please number...:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}