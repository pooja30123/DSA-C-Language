#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                isSwap = true;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    if(!isSwap){
        return;
    }
}

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void insertionSort(int arr[], int n){
   for(int i=1; i<n; i++){
     int curr = arr[i];
     int prev = i-1;
     while(prev>=0 && arr[prev]<curr){
        arr[prev+1]=arr[prev];
        prev --;
     } 
     arr[prev+1]=curr;
  }
}
int main(){
    int A[]={8,9,6,7,2,5,1,6};
    int n = sizeof(A)/sizeof(A[0]);
    insertionSort(A,n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

}