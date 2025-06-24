#include<iostream>
using namespace std;
int decTobin(int d){
    int p=1,ans=0;
    int r=0;
    while ((d!=0))
    {   
        r=d%2;
        d/=2;

        ans+=r*p;
        p=p*10;
    }
    return ans;
}
int main()
{
    for(int i=1; i<=20; i++){
        cout<<i<<"          "<<decTobin(i)<<"\n";
    }
    return 0;
}