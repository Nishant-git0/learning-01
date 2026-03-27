// call by value is function call in which a copy of actual value is passed to function and actual atual data is not affected 
#include<stdio.h>
void change(int x){
    x=50;
    printf("inside fucntion :%d\n",x);
}
int main(){
    int a=10;
    change(a);
    printf("outside of function :%d",a);
    getchar();
    getchar();
    return 0;
}