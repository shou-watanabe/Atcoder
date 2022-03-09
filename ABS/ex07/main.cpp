#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    set<int> mochi;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        mochi.insert(num);
    }

    cout << mochi.size() << endl;
}
