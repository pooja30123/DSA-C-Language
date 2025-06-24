#include<iostream>
#include<vector>
using namespace std;

//Brute Force Approach
vector<int> ProductExcepSelf(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n, 1);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(i!=j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

//Optimal Approch
vector<int> ProductExceptSelf(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix  *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = ProductExceptSelf(nums);
    cout << "[";
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        cout << ",";
    }
    cout << "]";
    cout << endl;
    return 0;
}