#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int st=0; st<n; st++){
        for(int ed=st; ed<n; ed++){
            for(int i=st; i<=ed; i++){
                cout<<arr[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }
}