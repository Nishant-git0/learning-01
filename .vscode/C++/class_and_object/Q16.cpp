/*
Q1: Function + Default Argument (Foundation Builder)

👉 Build a program to calculate Simple Interest:

Use a function
Default rate = 8%
Take input from user
🧠 Think First:
What are inputs?
What should function return?
When will default argument be used?
*/
#include<iostream>
using namespace std;
class Simpleinterest{
    private:
    int principle;
    int time;
    int Rate;
    public:

    Simpleinterest(int a,int b,int c){
        principle=a;
        time=b;
        Rate=c;
        
        }
    void setprinciple(int a){
      if(a>0){
        principle=a;
      }
      else{
        principle =0;
      }
    }
    int getprinciple(/*int a*/){
        return principle;
    }
    void settime(int b){
        if(b>0){
            time=b;
        }
        else{
            time=0;
        }
    }
    int gettime(){
        return time;
    }
    void setRate(int c){
        if(c>0){
        Rate=c;
    }
    else{
        Rate=8;
    }
}
int getRate(){
    return Rate;
;
}
float calc();
};
float Simpleinterest::calc(){
    return(principle*time*Rate)/100;
}
int main(){
    int a,b,c;
    cout<<"Enter the principle value:"<<endl;
    cin>>a;
    cout<<"Enter the time: "<<endl;
    cin>>b;
    cout<<"Enter the Rate:"<<endl;
    cin>>c;
    Simpleinterest s1(a,b,c);
  //  s1.setprinciple(a);
    //s1.setRate(c);
    //s1.settime(b);
   // s1.calc();
    cout<<"s1 principle:"<<s1.calc()<<endl;

}
