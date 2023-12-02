#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(6);
    s.insert(8);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin(),s.find(6));
    for(auto i:s){
        cout<<i<<" ";
    }

    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    for (auto i:s){
        cout<<i<<" ";
    }

}