#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m ;
    m[1]="hello";
    m[2]="how";
    m[4]="are";
    m[3]="you";
    m.insert({5,"mate"});
    for(auto i:m){
        cout<<i.first<<" "; //give key 
    }
    cout<<endl;
    for(auto i :m ){
        cout<<i.second<<" ";//give value 
    }
    cout<<endl;
    cout<<"check whether key is present or not : "<<m.count(51)<<endl;

    m.erase(1);// deleting 1st key - automatically deletes value

     for(auto i:m){
        cout<<i.first<<" "; //give key 
    }
    cout<<endl;
    for(auto i :m ){
        cout<<i.second<<" ";//give value 
    }
    cout<<endl; 

    auto it=m.find(3);
    for (auto i=it;i!=m.end();i++){      // print all key / value from the findkey  
        cout<<(*i).first<<" ";
    }
    
}