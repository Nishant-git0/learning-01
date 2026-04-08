#include<iostream>
using namespace std;
class Box{
private:
int Lenght;
public:
Box(int l){
Lenght=l;

}
friend int compare(Box b1,Box b2);
};
int compare(Box b1,Box b2){
    return(b1.Lenght>b2.Lenght)?b1.Lenght:b2.Lenght;
}
int main(){
    int l;
    int b;
    cout<<"Enter for box 1:"<<endl;
    cin>>l;
    cout<<"enter for lenght for box 2:"<<endl;
    cin>>b;
    Box b1(l);
    Box b2(b);
    cout<<"compare:"<<compare(b1,b2)<<endl;
}