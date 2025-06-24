#include<iostream>
#include<vector>
using namespace std;
int rotatedSearch(vector<int> vec, int tar){
    int st=0, end=vec.size();

    while (st<=end){
        int mid = st + (end - st) / 2;
        if (vec[mid] == tar) return mid;
        if (vec[st] <= vec[mid]) {
            if(vec[st]<=tar && tar<=vec[mid]){
                end = mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(vec[mid]<=tar && tar<=vec[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {4, 5, 6, 7, 0, 1, 2, 3};
    int tar = 3;
    cout<<rotatedSearch(vec, tar)<<endl;
    return 0;
}