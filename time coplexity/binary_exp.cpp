#include<iostream>
using namespace std;
double myPow(double x, int n){
    if (n == 0) return 1;
    if (n == 1) return x;
    if (x == 0) return 0;
    if (x == 1) return 1;
    if (x == -1) return n % 2 == 0 ? 1 : -1;
    
    long binForm = n;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    double ans=1.0;
    while (binForm>0)
    {
        if(binForm % 2==1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
    
}
int main(){
    double x;
    int n;
    cout<<"Enter the base number: ";
    cin>>x;
    cout<<"Enter the exponent: ";
    cin>>n;
    cout<<"The result is: "<<myPow(x,n)<<endl;
    return 0;
}