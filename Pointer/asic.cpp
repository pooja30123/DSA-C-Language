#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr = &a;
    int** pptr = &ptr;
    cout << "Value of a: " << a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of pptr: " << pptr << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    cout << "Value of **pptr: " << **pptr << endl;
    cout << "Value of *pptr: " << *pptr << endl;
    cout << "Value of &a: " << &a << endl;
    cout << "Value of &ptr: " << &ptr << endl;
    cout << "Value of &pptr: " << &pptr << endl;
    cout << "Value of &*ptr: " << &*ptr << endl;
    cout << "Value of &**pptr: " << &**pptr << endl;
    cout << "Value of &*pptr: " << &*pptr << endl;
    cout << "Value of &**pptr: " << &**pptr << endl;
    return 0;
}