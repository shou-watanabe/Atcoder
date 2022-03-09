#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums.at(i);

    bool is_all_even = 1;
    int dev_cnt = 0;
    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (nums.at(i) % 2 == 1)
                is_all_even = 0;
            nums.at(i) = nums.at(i) / 2;
        }
        if (!is_all_even)
            break;
        dev_cnt++;
    }

    cout << dev_cnt << endl;
}
