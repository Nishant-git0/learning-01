#include<iostream>
using namespace std;
class Rectangle{
    private:
    int Lenght;
    int Breadth;
     
    public:
    Rectangle(int l,int b){
        this-> setLength(l);
        this->setBreadth(b);

    }
    void setLength(int l){
        if (l>0)
        {
            Lenght=l;
        }
        else{
            Lenght=0;
        }
    }
    void setBreadth(int b){
        if (b>0)
        {
            Breadth=b;
        }
        else{
            Breadth=0;
        }
        
    }
    int getLength(int l){
          return Lenght;
    }
    int getBreadth(int b){
        return Breadth;
    }
    int area(){
        return Lenght*Breadth;
    }
    float circumference(){
        return 2*(Lenght+Breadth);
    }
};
int main(){
    int l,b;
    cout<<"Enter number for Lenght:"<<endl;
    cin>>l;
    cout<<"Enter number for Breadrh :"<<endl;
    cin>>b;
    Rectangle r(l,b);
    cout<<"area:"<<r.area()<<endl;
    cout<<"circumference:"<<r.circumference()<<endl;
}