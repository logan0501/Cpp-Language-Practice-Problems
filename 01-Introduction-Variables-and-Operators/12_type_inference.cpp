#include<iostream>
#include<typeinfo>
using namespace std;

// Problem - we need to print the type id of a variable

int main(){
    int a=10;
    cout<<typeid(a).name();
    return 0;
}