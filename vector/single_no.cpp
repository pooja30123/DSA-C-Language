#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,5,3,6,1,6,3};  // this vetor containing each elment twice expet one we have to find the element which is not repeated
    int ans=0;
    for(int val:vec){
        ans=ans^val;
    }
    cout<<"Unique No: "<<ans<<endl;
}