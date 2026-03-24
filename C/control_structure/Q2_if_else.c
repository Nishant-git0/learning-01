/*
Even or Odd easy

if-else
modulus operator %
Write a C program that reads an integer and prints whether it is Even or Odd.

Requirements
Read one integer using scanf
Use the % operator inside an if-else condition
Print "Even" or "Odd"
Sample output
Enter number: 9
Result: Odd
*/
#include<stdio.h>
int main(){
int num;
printf("Enter the number :\n");
scanf("%d",&num);
if (num % 2 == 0)
{
    printf("The number is Even :%d",num);
}
else{
    printf("The given number is Odd :%d \n",num);
}
// puase before closing (so console can stay open )
printf("press enter to exit");
getchar(); //consume the newline from scanf 
getchar(); //wait for user to press enter
return 0;
}
