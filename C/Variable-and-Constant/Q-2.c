/*Swap Two Numbers Without a Third Variable

arithmetic operators
int variables
scanf / printf
assignment operators
Write a C program that takes two integers from the user, swaps their values without using a third (temporary) variable, and prints the result before and after swapping.

Requirements
Read two integers a and b from the user using scanf
Print original values before the swap
Swap using only arithmetic operators (+ and -) — no third variable allowed
Print the values after the swap
Sample output
Enter two numbers: 8 3
Before swap: a = 8, b = 3
After swap : a = 3, b = 8*/
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter two number ");
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d , b=%d",a,b);
    a=a + b; // a=8+3=11;
    b=a-b; // b=11-3=8;
    a=a-b; // a=11-8=3;
    printf("After swap: a=%d , b=%d",a,b);
    return 0;

}