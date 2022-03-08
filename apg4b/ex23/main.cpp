#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    map<int, int> cnt_map;
    for (int i = 0; i < N; i++)
    {
        if (cnt_map.count(A.at(i)))
            cnt_map.at(A.at(i)) += 1;
        else
            cnt_map[A.at(i)] = 1;
    }

    int max_cnt = 0;
    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        if (max_cnt < cnt_map.at(A.at(i)))
        {
            max_cnt = cnt_map.at(A.at(i));
            ans = A.at(i);
        }
    }

    cout << ans << " " << max_cnt << endl;
}
