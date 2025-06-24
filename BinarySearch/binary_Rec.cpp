#include<iostream>
#include<vector>
using namespace std;
int recBinarySearch(vector<int> arr, int tar, int st, int end){
    while(st<=end){
        int mid = st + (end - st) / 2;
        if(tar > arr[mid]){
            return recBinarySearch(arr,tar,mid+1,end);
        }else if(tar < arr[mid]){
            return recBinarySearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,5,7,9,10};
    cout<<recBinarySearch(arr,10,0,6)<<endl;
    return 0;
}