#include<stdio.h>
void calculate(int a,int b,int *sum,int *product){
    *sum=a+b;
    *product=a*b;
} int main(){
    int x=3,y=5;
    int sum,product;
    calculate(x,y,&sum,&product);
    printf("sum=%d\n",sum);
    printf("product=%d\n",product);
    getchar();
    getchar();
    return 0;
}