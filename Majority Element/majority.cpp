#include<iostream>
#include<vector>
using namespace std;
int majorityElt(vector<int> vec){
    int freq=0,ans=0;
    int n=vec.size();

    for(int i=0; i<n;i++){
        if(freq==0) ans=vec[i];
        if(ans==vec[i]) freq++;
        else freq--;
    }
    return ans;
}
int main(){
    vector<int> num={2,2,1,1,1,2,2,2,1};
    cout<<majorityElt(num);
}