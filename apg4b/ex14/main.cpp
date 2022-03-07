#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int sub = max(max(A, B), C) - min(min(A, B), C);
    cout << sub << endl;
}
