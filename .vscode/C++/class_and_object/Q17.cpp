#include<iostream>
using namespace std;

template<typename T>
void swapValues(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;
}
void display(int x, int y){
    cout<<" x = "<<x<<" y = "<<y<<endl;
}
void display(float x,float y){
    cout<<"x = "<<x<<"y = "<<y<<endl;

}
int main(){
    int a=5,  b=6;
    swapValues(a,b);
    display(a,b);
    float x=5.5,y=4.5;
    swapValues(x,y);
    display(x,y);
    return 0;
}