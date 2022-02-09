#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/calculator/1/?track=cip-flow-function-loop&batchId=185

void utility(int a, int b, int operator_){
    switch (operator_){
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
}
int main(){

    return 0;
}