/*
Positive, Negative or Zero easy

if
else if
else
Write a C program that reads an integer and prints whether it is Positive, Negative, or Zero.

Requirements
Read one integer using scanf
Use if / else if / else to check all three cases
Print exactly one of: Positive, Negative, Zero
Sample output
Enter number: -5
Result: Negative
*/

#include<stdio.h>
int main(){
      int num;
      printf("Enter intger number :\n");
      scanf("%d",&num);
      printf("Entered numbered is :%d\n",num);
      if (num<0)
      {
         printf("The given number is negative :%d",num);
      }
     else if (num>0)
     {
        printf("The given number is positive :%d\n",num);

     }
     else{
        printf("The given number is:%d",num);
     }
     // pause before closing (so the console stay open)
     printf("Press enter to exit....");
     getchar(); // consume the newline from scanf 
     getchar(); // wait for user to press enter 
     
      return 0;
}