/*
for avegeraging the sum of the interger
*/
#include<iostream>
using namespace std;
class Average{
    public:
    int arr[5];
    int Total(){
        int total=0;
    for(int i=0;i<5;i++){
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
        total +=arr[i];

    }
    cout<<"Total of given number is : "<<total<<endl;
    return total;
}
};
int main(){
    int arr[5];
    Average a;
    a.Total();
     cout<<"again printing total : "<<a.Total()<<endl;
    return 0;
   
}
