#include<iostream>
#include<array>
 
using namespace std;
int main(){
    array<int,5> arr = {8,2,3,4,5};
    int size =arr.size();
    cout<<"size is "<<size<<endl;
    cout<<"element at index 2 is "<<arr.at(2)<<endl;
    cout<<"empty or not "<<arr.empty()<<endl;
    cout<<"element at zero index is "<<arr.front()<<endl;
    cout<<"element at last index is "<< arr.back()<<endl;
}