#include<iostream>
#include<vector>
using namespace std;
int singleElement(vector<int> vec){
    int st=0,end=vec.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(vec[mid]!=vec[mid-1] && vec[mid]!=vec[mid+1]){
            return vec[mid];
        }
        if(mid % 2==0){
            if(vec[mid]==vec[mid-1]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        else{
            if(vec[mid]==vec[mid-1]){
            st = mid+1;
            }else{
                end = mid-1;
            }   
        }
    }
    return -1;
}
    



int main(){
    vector<int> nums = {1,1,2,2,3,3,4,4,5,5,6,6,7};
    cout<<singleElement(nums)<<endl;
    return 0;
}