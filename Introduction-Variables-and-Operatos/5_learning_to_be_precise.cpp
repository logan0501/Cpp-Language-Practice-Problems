#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/learning-to-be-precise/1/?track=cip-intro-var-operators&batchId=185

void precise(float a, float b)
{
    //perform a/b
    float res=a/b;
    cout<<res<<" "<<setprecision(3)<<fixed<<res<<endl;
    
    cout<<endl;
}
int main(){
    precise(5.43,2.653);
    return 0;
}