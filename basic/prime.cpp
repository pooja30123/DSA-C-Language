#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Enter Starting no: ";
    cin>> a;
    cout<< "Enter Last no: ";
    cin>> b;
    for(int i=a;i<=b;i++){
        bool isprime = true;
        if(i<2)
            isprime=false;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                isprime=false;
                break;
            }             
        }
        if(isprime){
            cout<< i<< " is a prime no\n";
        }
    }  
    return 0;
}