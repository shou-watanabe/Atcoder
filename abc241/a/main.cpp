#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(10);
    cin >> a.at(0) >> a.at(1) >> a.at(2) >> a.at(3) >> a.at(4) >> a.at(5) >> a.at(6) >> a.at(7) >> a.at(8) >> a.at(9);

    int num = 0;
    for (int i = 0; i < 3; i++)
        num = a.at(num);
    cout << num << endl;
}
