/*
finding minimum number in then the given array 
*/
#include<iostream>
using namespace std;
class Minimum{
    public:
    int a;
    Minimum(){}
    Minimum (int a){
        this->a=a;
    }
    int findmin(int arr[a]){
        int min =0;
        
      for(int i=0;i<a;i++){
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
      }
      return min;
    }
};
int main(){
    int a;
    int arr[];
    cout<<"Enter for array number : "<<endl;
    cin>>a;
    Minimum m;
    m.findmin(a);
    return 0;
}