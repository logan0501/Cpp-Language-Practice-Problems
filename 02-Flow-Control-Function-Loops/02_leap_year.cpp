#include <bits/stdc++.h>
using namespace std;

// Link- https://practice.geeksforgeeks.org/problems/leap-year0943/1/?track=cip-flow-function-loop&batchId=185

int isLeap(int N)
{
    if ((N % 4 == 0) && (N%100!=0) || (N%400==0) )
    {
        return 1;
    }
    return 0;
}
int main()
{

    return 0;
}