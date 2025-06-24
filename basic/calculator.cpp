#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second number:";
    cin>>b;
    cout<<"Enter operator (+,-,*,/): ";
    cin>>c;
    switch(c)
    {
        case '+':
        cout<<"Result is "<<a+b;
        break;
        case '-':
        cout<<"Result is "<<a-b;
        break;
        case '*':
        cout<<"Result is "<<a*b;
        break;
        case '/':
        cout<<"Result is "<<a/b;
        break;
        default:
        cout<<"Invalid operator";
        break;
    }
    return 0;
}