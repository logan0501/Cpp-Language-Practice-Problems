#include <bits/stdc++.h>
using namespace std;

/*
Problem - Given 3 numbers A, B and C. Find the greatest number among them.
*/
void greatestAmongThree(int a, int b, int c)
{
    if (a > b and a > c)
        cout << a;
    else if (b > a and b > c)
        cout << b;
    else
        cout << c;
}
int main()
{
    greatestAmongThree(10, 20, 30);
    return 0;
}