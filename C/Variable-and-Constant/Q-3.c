/*BMI Calculator

float / double
scanf with %f
arithmetic operators
printf formatting
relational operators
Write a C program that reads a person's weight (kg) and height (m), calculates their BMI, and prints the result along with their BMI category.

Requirements
Read weight (float) and height (float) using scanf
Calculate BMI using the formula: BMI = weight / (height * height)
Print BMI rounded to 2 decimal places
Print the correct category based on BMI value using relational operators
BMI categories
BMI < 18.5 → Underweight
BMI < 25.0 → Normal weight
BMI < 30.0 → Overweight
BMI >= 30.0 → Obese
Sample output 1
Enter weight (kg): 70
Enter height (m) : 1.75hr
BMI      : 22.86
Category : Normal weight
Sample output 2
Enter weight (kg): 50
Enter height (m) : 1.75
BMI      : 16.33
Category : Underweight
*/
#include <stdio.h>

int main() {
    float weight, height, BMI;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (m) : ");
    scanf("%f", &height);
    BMI = weight / (height * height);  
    printf("Weight   : %.2f kg\n", weight);
    printf("Height   : %.2f m\n",  height);
    printf("BMI      : %.2f\n",    BMI);
    if (BMI < 18.5)
        printf("Category : Underweight\n");
    else if (BMI < 25.0)
        printf("Category : Normal weight\n");
    else if (BMI < 30.0)
        printf("Category : Overweight\n");
    else
        printf("Category : Obese\n");

    return 0;
}