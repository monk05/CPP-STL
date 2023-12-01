#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vtr;
    cout<<"capacity "<<vtr.capacity()<<endl;
    vtr.push_back(2);
    vtr.push_back(8);
    vtr.push_back(5);
    for(int i:vtr){
        cout<<i<<" ";
    }
    cout <<endl<<"capacity of vector" << vtr.capacity()<<endl;
    cout<<"size of vector "<<vtr.size()<<endl;
    cout<<"element at 1 index is "<<vtr.at(1)<<endl;
    vtr.pop_back(); // it removes one element from the end 
    for(int i:vtr){
        cout<<i<<" ";
    }
    cout<<endl;
    vtr.pop_back();
    for(int i:vtr){
        cout<<i<<" ";
    }
    


}
