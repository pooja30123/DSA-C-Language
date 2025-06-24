#include<iostream>
using namespace std;
/*int main(){
    int arr[] = {41,83,65,96,47,69,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <=n/2; i++)
    {
        swap(arr[i],arr[n+1]);
        n--;
    }
    cout<<"Reverse Array:\n";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}*/
int revarray(int arr[], int n){
    int start=0,end=n-1;
    while(start<=n/2){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int a[s];
    cout<<"Enter Element of array:\n";
    for(int i = 0; i < s; i++){
        cin>>a[i];
    }

    revarray(a,s);
    cout<<"Reverse Array:\n";
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}