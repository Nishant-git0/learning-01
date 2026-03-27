#include<stdio.h>
// recursive function return nth fibonacci number
// fib(0)=0, fib(1)=1; fib(n)=fib(n-1)+fib(n-2)
int fib(int n){
    if(n == 0) // base case 1
    return 0;
    if(n == 1) // base case 2
    return 1;
    return fib(n-1) + fib(n-2);
}
int  main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("fibonacci series :");
    for(int i = 0; i < n ;i++){
        printf("fib(%d) : %d",i,fib(i));
        printf("\n");
    }
   // printf("\n");
    // pause to cosole (so terminal can stay open )
    getchar(); // consume sublime from scanf
    getchar(); //wait for user to press enter
    return 0;
}