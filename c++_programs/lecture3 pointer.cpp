#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b= &a;
    // /address of operator
    // cout<<"the address of a is;"<<&a<<endl;
    // cout<<"the address of a is;"<<b<<endl;
    

    // Dereference operator

    // cout<<"the value at addresss at b: "<<*b<<endl;

    int* *c = &b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c))  is"<<**c<<endl;


    return 0;
}