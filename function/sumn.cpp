#include<iostream>
using namespace std;
int sum(int n){
    int s=(n*(n+1))/2;
    return s;
}
int main(){
    cout<<sum(10);
}