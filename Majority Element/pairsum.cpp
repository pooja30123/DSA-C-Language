#include<iostream>
#include<vector>
using namespace std;
vector<int> paiSum(vector<int> vec,int targ){  //0[n^2]
    int n=vec.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i]+vec[j]==targ){
                ans.push_back(i);
                ans.push_back(j);
                
            }
        }   
    }
    return ans;

}

vector<int> pairSum(vector<int> vec,int targ){  //0[n]
    int n=vec.size();
    int i=0,j=n-1;
    vector<int> ans;
    while(i<j){
        int pairSum=vec[i]+vec[j];
        if(pairSum>targ)  j--;
        else if(pairSum<targ)  i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
    
    
}
int main(){
    vector<int> vec = {1,2,3,4,5};
    int target=7;
    vector<int> ans1 = paiSum(vec,target);
    cout<<ans1[0]<<","<<ans1[1]<<endl;
    vector<int> ans2 = pairSum(vec,target);
    cout<<ans2[0]<<","<<ans2[1]<<endl;

}