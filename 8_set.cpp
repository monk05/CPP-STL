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

    cout<<"check whether 8 is present or not : "<<s.count(81)<<endl; //bollean type 

   

    s.erase(s.begin(),s.find(6));
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    for (auto i:s){
        cout<<i<<" ";
    }

}