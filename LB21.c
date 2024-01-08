//Write a program which accept name from user and print that name
//Input   : Sandhya Satish Sampate
//Output  : Sandhya Satish Sampate

#include<stdio.h>
int main()
{

 char Name[40];
 printf("Please enter full name...\t");

 //^\n stands for taking input until a newline isn't encounterd.
 //then, with this %*c it reads the newline character
 //The used* indicates that this newline character is discarded.
 scanf("%[^\n]*c",&Name);         
 printf("your name is %s ",Name);

 return 0;

}