#include<iostream>
using namespace std;
/*
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7,max_sum=0;
    for(int st=0; st<n; st++){
        int curr_sum=0;
        for(int ed=st; ed<n; ed++){
            curr_sum += arr[ed];
            max_sum = max(max_sum, curr_sum);
        }
    }
    cout<<max_sum<<endl;
}
*/


//USING KANDAN'S ALGO

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int curr_sum=0; 
    int max_sum=INT8_MIN;
    for(int i=0; i<n; i++){
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if(curr_sum<0) curr_sum=0;
    }
    cout<<max_sum<<endl;
    return 0;
}