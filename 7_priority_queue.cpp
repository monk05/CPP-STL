#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue <int> max;
    priority_queue < int ,vector<int>,greater<int>> min;
    max.push(5);
    max.push(10);
    max.push(18);
    max.push(13);
    max.push(17);
    int n= max.size();
    cout << "max heap : ";
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;
    min.push(10);
    min.push(14);
    min.push(12);
    min.push(9);
    min.push(4);
    int m=min.size();
    cout<<"min heap : "; 
    for(int i=0;i<n;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
}