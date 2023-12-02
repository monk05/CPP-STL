#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>str;
    str.push("shubham");
    str.push("kumar");
    str.push("pandey");
    cout<<"top element :" <<str.top()<<endl;
    cout<<"size is : "<<str.size()<<endl;
    while(!str.empty()){
        cout<<str.top()<<endl;
        str.pop();
    }
    
}