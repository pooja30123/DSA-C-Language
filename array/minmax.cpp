#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Array Value:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int smallest = INT16_MAX;
    int largest = INT8_MIN ;
    for(int i=0; i<5; i++){
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    cout<<"Smallest Element in array is"<<smallest<<endl;
    cout<<"Largest Element in Array is "<<largest<<endl;

    for(int i=0;i<5;i++){
        if(smallest==arr[i])
        cout<<"Smallest Element is at index "<<i<<endl;
        if(largest==arr[i])
        cout<<"Largest Element is at index "<<i<<endl;
    }
    return 0;
}
