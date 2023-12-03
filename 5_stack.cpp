#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("hello");
    s.push("how");
    s.push("are");
    s.push("you");
    cout<<"top element : "<<s.top()<<endl;
    cout<<"size is : "<<s.size()<<endl;
    s.pop();
    if(!s.empty()){
        cout<<"top element : " <<s.top()<<endl;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


}
