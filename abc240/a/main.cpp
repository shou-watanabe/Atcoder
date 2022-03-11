#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sub;
    cin >> a >> b;

    sub = abs(a - b);
    if (sub == 1 || sub == 9)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
