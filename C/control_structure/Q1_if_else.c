/*
Largest of Two Numbers easy

if-else
relational operators
Write a C program that reads two integers and prints the larger one. If they are equal, print a message saying so.

Requirements
Read two integers a and b
Compare using if / else if / else
Handle the case where both are equal
Sample output
Enter two numbers: 12 7
Largest: 12
*/

#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter first number :\n");
    scanf("%d",&num1);
    printf("Enter second number :\n");
    scanf("%d",&num2);
    if (num1>num2)
    {
    printf("The largest Enter numbered is :%d",num1);

    }
    else if(num1==num2){
        printf("The Enter numbered is same :%d\n",num1);
    }
    else{
        printf("The largest Enter numbered is :%d\n",num2);
    }
    // pause before closing (so console can stay open )
    getchar();
    getchar();
   return 0; 
}