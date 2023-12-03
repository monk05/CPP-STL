#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

cout<<"finding number 5 : "<<binary_search(v.begin(),v.end(),5)<<endl; //bollean type
cout<<"lower bound"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper bound"<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

int a=3;
int b=5;

cout<<"max : "<<max(a,b)<<endl;
cout<<"min : "<<min(a,b)<<endl;

swap(a,b);
cout<<"a after swap :"<<a <<endl;

string s ="abcd";
reverse(s.begin(),s.end());
cout<<"string-> "<<s<<endl;

rotate(v.begin(),v.begin()+2,v.end());  // +1,+2 decide number of shifts 
cout<<"after rotation "<<endl;
for(int i:v){
    cout<<i<<" ";
}

//sorting in asc order
cout<<endl;
vector<int> vtr;
vtr.push_back(5);
vtr.push_back(1);
vtr.push_back(4);
vtr.push_back(8);
cout<<"befor sorting"<<endl;
for(int i:vtr){
    cout<<i<<" ";
}
cout<<endl;
sort(vtr.begin(),vtr.end());
cout<<"after sorting in asc order"<<endl;
for(int i :vtr ){
    cout<< i<<" ";
}
cout<<endl;

sort(vtr.begin(),vtr.end(),greater<int>());
cout<<"after sorting in desc order"<<endl;
for(int i:vtr){
    cout<<i<<" ";
}




}