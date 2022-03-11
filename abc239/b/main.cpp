#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X;
    cin >> X;

    long double num = (long double)X / 10;
    if (num >= 0 || X % 10 == 0)
        cout << (long long)num << endl;
    else
        cout << (long long)num - 1 << endl;
}
