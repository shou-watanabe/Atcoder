#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H;
    cin >> H;

    double dist = sqrt((double)H * (12800000.0 + (double)H));

    cout << fixed << setprecision(9);
    cout << dist << endl;
}
