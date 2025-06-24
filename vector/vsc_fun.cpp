#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    vec.push_back(6);  
    vec.push_back(7);   //size=6, capacity=10
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}