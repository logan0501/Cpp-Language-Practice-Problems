#include<bits/stdc++.h>
using namespace std;

// Problem - we need to print boolean value
void printval(bool val){
    cout<<val;
    // The above statement prints 1
    cout<<std::boolalpha;
    // This is flag in iomanip to print corresponding boolean values
    cout<<val;
}
int main(){
    printval(true);
    return 0;
}