#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    set<int> nums;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        nums.insert(num);
    }
    cout << nums.size() << endl;
}
