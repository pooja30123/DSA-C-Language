#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> arr,int n, int m, int maxPages){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxPages){
            return false;
        }
        if(pages+arr[i]<=maxPages){
            pages+=arr[i];
        }else{
            student++;
            pages=arr[i];
        }
    }
    return student>m ? false:true;
}

int alloteBook(vector<int> arr, int n, int m){
    if(m > n){
        return -1;
    } 
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int ans=-1;
    int st=0, end=sum;
    while(st<=end){
        int mid = (st+end)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={15,17,20};          //arr={2,1,3,4};
    int n = arr.size();
    int m = 2;
    cout<<alloteBook(arr,n,m)<<endl;
    return 0;
}