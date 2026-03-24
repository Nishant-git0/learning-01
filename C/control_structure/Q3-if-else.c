/*
Grade Calculator medium

else if ladder
relational operators
Write a C program that reads a student's marks (0–100) and prints the grade using an else-if ladder.

Grade rules
marks >= 90 → Grade A
marks >= 80 → Grade B
marks >= 70 → Grade C
marks >= 50 → Grade D
below 50 → Grade F
Sample output
Enter marks: 83
Grade: B
*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks obtained :\n");
    scanf("%d",&marks);
    printf("Your marks obtained :%d\n",marks);
    if(marks > 100 || marks < 0){
        printf("Invalid marks ");
    }
    else if (marks >= 90 && marks < 99){
        printf("you got Grade A");
    }
    else if (marks >= 80 && marks < 89)
    {
        printf("You got Grade B");
    }
    else if (marks >= 70 && marks < 79)
    {
       printf("You got Grade C");
    }
    else if (marks >= 60 && marks < 69)
    {
        printf("You got Grade C");
    }
    else if (marks >= 50 && marks < 59)
    {
        printf("You got Grade D");
    }
    else if (marks <= 50 && marks >= 0)
    {
        printf("You got Grade D");
    }
    
    else{
        printf("Invalid input");
    }
    // pause before closing (so terminal can stay open )
    getchar(); //consume the newline from scannf 
    getchar(); //wait for the user to press enter 
   return 0; 
}