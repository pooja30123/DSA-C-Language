#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    while (n!=0)
    {
        f*=n;
        n--;
    }
    return f;
}
int main()
{
    int ans=fact(5);
    cout<<ans;
}