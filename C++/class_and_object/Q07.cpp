#include<iostream>
using namespace std;
class Box{
    private:
    int Lenght;
    public:
    Box(int l){
     Lenght=l;
    }
friend int compare(Box b1,Box b2,Box b3);

};
int compare(Box b1,Box b2,Box b3){

    return(b1.Lenght >b2.Lenght,b3.Lenght)?b1.Lenght:b2.Lenght;
}
int main(){
    int l;
    int b;
    int c;
    cout<<"Enter for lenght Box 1:"<<endl;
    cin>>l;
    cout<<"Enter lenght for box 2:"<<endl;
    cin>>b;
    cout<<"enter lenght for box 3:"<<endl;
    cin>>c;
    Box b1(l),b2(b),b3(c);
    cout<<"Comparsion :"<< compare(b1,b2,b3)<<endl;
}
