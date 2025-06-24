#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColor(vector<int> &nums){
    int n=nums.size();
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}
int main(){
    vector<int> vec={1,2,2,0,0,1,1,0,0,2,2,0,1,0,2,1,0};
    int n=vec.size();
    sortColor(vec);
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}