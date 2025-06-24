#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.emplace_back(6);
    v.pop_back();
    v.insert(v.begin(),10);
    cout<<"front:"<<v.front()<<endl;
    cout<<"value at index 2:"<<v.at(2)<<endl;
    cout<<"back:"<<v.back()<<endl;
    //v.clear();
    cout<<"Is empty:"<<v.empty()<<endl;
    for(auto it= v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
}