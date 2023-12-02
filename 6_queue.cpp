#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hello");
    q.push("how");
    q.push("are");
    q.push("you");
    cout<<"first element : "<<q.front()<<endl;
    cout<<"size : "<<q.size()<<endl;
    q.pop();
    if(!q.empty()){
        cout<<q.front();
    }
  
    
}