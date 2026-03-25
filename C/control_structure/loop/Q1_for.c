/*

Print 1 to N
easy
Read a number N from the user. Print all integers from 1 to N, one per line.
for loop
scanf
printf
*/
#include<stdio.h>
int main(){
    int i;
    int sum;
    int num;
    sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Entered number :%d\n",num);
    for(i = 1;i<num;i++){
     printf("The value of num:%d\n",i);
     sum=sum + i;
     printf("The sum of number is :%d\n",sum);
    }
    // pause before closing (so the terminal stay open )
    getchar(); // consume the sublime from scanf
    getchar(); // wait for user to press enter 
    return 0;
}