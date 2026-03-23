/*
Constants + Operators + I/O
Circle Calculator

#define constant
float variables
scanf / printf
arithmetic operators
%.2f formatting
Write a C program that reads the radius of a circle from the user and calculates its area and circumference. Use #define for PI.

Requirements
Define PI as a constant using #define (value: 3.14159)
Read the radius as a float using scanf
Calculate area using: Area = PI * radius * radius
Calculate circumference using: C = 2 * PI * radius
Print radius, area and circumference — all with 2 decimal places
No semicolon after #define — you learned this today!
Sample output
Enter radius: 7
Radius       : 7.00
Area         : 153.94
Circumference: 43.98
*/
#include<stdio.h>
#define PI 3.14
int main(){
    float radius;
    float Area;
    float circumference;
    printf("Enter the radius ");
    scanf("%f",&radius);
    printf("Enter radius %.2f:\n",radius);
    Area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("The area of given circle:%.2f \n",Area);
    printf("The circumference of given circle :%.2f \n",circumference);

}