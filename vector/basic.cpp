#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ={1,2,3};
    cout<<vec[0]<<endl;
    vector<int> vs(5,2);
    cout<<vs[0]<<endl;
    cout<<vs[1]<<endl;
    cout<<vs[2]<<endl;
    cout<<vs[3]<<endl;
    cout<<vs[4]<<endl;
    cout<<"For Each loop"<<endl;
    for(int val:vec){
        cout<<val<<endl;
    }
    vector<char> vch ={'a','b','c','d','e'};
    cout<<"For Each loop"<<endl;
    for(char val:vch){
        cout<<val<<endl;
    }
    return 0;
}