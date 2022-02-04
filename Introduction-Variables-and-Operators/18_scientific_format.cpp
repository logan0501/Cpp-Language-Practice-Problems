#include<bits/stdc++.h>
using namespace std;
/*
There are times when your answer is a double data type and 
you want to show the same in scientific format. Here, we 
have to get a scientific format answer out of a double data 
type. You are given one number a. You need to output its
sceintific format upto 4 precision.
*/

void scientific(float a){
    cout<<setprecision(4)<<scientific;
    cout<<a;
}
int main(){
    scientific(5.43 );
    return 0;
}