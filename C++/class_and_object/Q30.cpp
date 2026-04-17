/*
 finding for maximum number in betwween array 
*/
#include<iostream>
using namespace std;
class Max{
    public:
    int findmax(int arr[5]){
        int max=0;
        for(int i=0;i<5;i++){
            cout<<"Enter the number : "<<i<<endl;
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout<<"the maximum is : "<<max<<endl;
        return max;
    }
};
int main(){
    int arr[5];
    Max m;
    m.findmax(arr);
    

}
