#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nexPermutation(vector<int> &A){
    int pivot=-1, n=A.size();
    //1st step: Find Pivot
    for(int i=n-1;i>=0; i--){
        if(A[i]>A[i-1]){
            pivot = i-1;
            break;
        }
    }
    if(pivot == -1){
        reverse(A.begin(),A.end());
        return;
    }

    //2nd step: Find Next Greater Element
    for(int i=n-1; i>pivot; i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }

    //3rd Step: Reverse the right part of the pivot
    int i=pivot+1, j=n-1;
    while(i<=j){
        swap(A[i++],A[j--]);
    }
}

int main(){
    vector<int> A = {1, 2, 3, 5, 4};
    nexPermutation(A);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return 0;
}