#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(4);
    dq.push_front(8);
    dq.push_back(3);
    dq.push_back(9);
    dq.push_back(10);
    dq.push_back(22);

    
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at index 2 is "<<dq.at(2)<<endl;
    cout<<"element at front is "<<dq.front()<<endl;
    cout<<"element at back is "<<dq.back()<<endl;
    cout <<"size is "<<dq.size()<<endl;
    dq.pop_front();
    dq.pop_back();
    for(int i:dq){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"element at front is "<<dq.front()<<endl;
    cout<<"element at back is "<<dq.back()<<endl;
    cout<<"whether empty or not "<<dq.empty()<<endl;

    dq.erase(dq.begin(),dq.begin()+1);
    
    for(int i:dq){
        cout<<i<<" ";
    }


}