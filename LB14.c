//Accept one character from user and convert case of that character.
//INPUT  : a        //OUTPUT : A
//INPUT  : D       //OUTPUT : d
#include<stdio.h>
void DisplayConvert(char CValue)
{ 
    //if(CValue>=97 && CValue<=122)
    if(CValue>='a'&& CValue<='z')
    {
        CValue=CValue-32;                                //difference between them is 32.i.e a=97 and A=65(32)
        printf("%c",CValue);
    }
    else if(CValue>='A'&& CValue<='Z')
    {
        CValue=CValue+32;
        printf("%c",CValue);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter character \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue); 
    return 0;
}