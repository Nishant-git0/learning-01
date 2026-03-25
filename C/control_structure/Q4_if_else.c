/*
Leap Year Checker medium

if-else
logical operators && ||
modulus %
Write a C program that reads a year and checks whether it is a leap year or not.

Leap year rules
Divisible by 4 → leap year
BUT divisible by 100 → NOT a leap year
BUT divisible by 400 → IS a leap year
Sample output 1
Enter year: 2024
2024 is a Leap Year
Sample output 2
Enter year: 1900
1900 is NOT a Leap Year
*/
#include<stdio.h>
int main(){
    int year;
    //int leap;
    printf("Enter the year:");
    scanf("%d",&year);
    printf("Enter year is:%d\n",year);
    if (year %4 ==0 || year %100 == 100 )
    {
        printf("The given year is leap year:%d\n",year);
    }
    else if (year%400 == 0)
    {
     printf("The given year is leap year :%d\n",year);  
    }
    else 
    {
        printf("The given year is not leap year:%d\n",year);
    }
    // pause before closing (so terminal can stay open )
    getchar(); //consume the sublime form scanf
    getchar(); //wait for user to press enter

    
    return 0;

}