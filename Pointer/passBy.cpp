#include<iostream>
using namespace std;

//Pass by Value
void modifyValueP(int a){
    a=20;
}

//Pass by Reference Using Reference
void modifyValueR(int &a){
    a=20;
}

//Pass by Reference Using Pointer
void modifyValueP(int* a){
    *a=30;
}

int main(){
    int x=10;
    modifyValueP(x);
    cout << x << endl;   //10
    modifyValueR(x);
    cout << x << endl;   //20
    modifyValueP(&x);
    cout << x << endl;   //30

    return 0;
}