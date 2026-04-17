#include<iostream>
using namespace std;
class Loops{
    public:
    
    Loops(){
        
    }
    int sum(int arr[5]){
        int total =0;
        for(int i=0;i<5;i++){
            cout<<"Enter the number :"<<endl;
            cin>>arr[i];
            cout<<"Enter number is : "<<arr[i]<<endl;
                    total += arr[i];


        }
        cout<<"sum of number : "<<total<<endl;
        return total;
    }
};
int main(){
    int arr[5];
   
    Loops s;
    s.sum(arr);
    return 0;
}