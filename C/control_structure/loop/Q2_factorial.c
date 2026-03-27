/*

Factorial
easy
Read a number N. Print N! (factorial). E.g. 5! = 120.
for loop
multiplication
*/
#include<stdio.h>
int main(){
    int i,n;
    long long factorial = 1;
    printf("Enter the number :");
    scanf("%lld",&n);
    for(i = 1; i <= n; i++){
        factorial=factorial*i;
        printf("The factorial of given number is :%lld\n",factorial);
    }
    // pause before closing (so the terminal stay open)
    getchar(); //consume the submile from scanf
    getchar(); // wait for user to press enter
    
   return 0; 
}