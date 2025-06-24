#include<iostream>
#include<math.h>
using namespace std;
int binTodec(int b){
    int r,p=0,ans=0;
    while (b!=0)
    {
        r=b%10;
        ans+=r*pow(2,p);
        p++;
        b/=10;
    }
    return ans;
    
}
int main()
{
    int binary;
    cout<<"Enter Binary No:";
    cin>>binary;
    cout<<"Decimal Conversion :"<<binTodec(binary);
    return 0;
}