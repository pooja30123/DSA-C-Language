#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Array Value:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int smallest = INT8_MAX ;
    for(int i=0; i<5; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"Smallest Element in Array is "<<smallest<<endl;
    return 0;
}
