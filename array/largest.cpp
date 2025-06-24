#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Array Value:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest = INT8_MIN ;
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element in Array is "<<largest<<endl;
    return 0;
}
