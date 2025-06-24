#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    int *ptr =arr;
    cout << arr <<endl;   //print the address of the arr[0]
    ptr++;
    cout << *ptr <<endl;   //print the value of the arr[1]
    ptr++;
    cout << *ptr <<endl;   //print the value of the arr[2]
    ptr++;
    cout << *ptr <<endl;   //print the value of the arr[3]

    int arr2[] = {10,20,30,40};
    int *ptr2 =arr;
    cout << arr2 <<endl;   //print the address of the arr2[0]
    cout << *(ptr2 + 1) <<endl;   //print the value of the arr2[1]
    cout << *(ptr2 + 2) <<endl;   //print the value of the arr2[2]
    cout << *(ptr2 + 3) <<endl;   //print the value of the arr2[3]
    return 0;
}