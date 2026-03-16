#include<stdio.h>
#define Rates 5
int main(){
    const float rate = 0.05;
    int time = 3;
    float principal = 1000.00;
    float SI = (Rates*principal*time)/100;
    printf("%.2f",SI);
    return 0;
}