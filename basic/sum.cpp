#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of numbers divisible by 3 is: "<<sum;
}