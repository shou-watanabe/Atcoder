#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
        cin >> a.at(i) >> b.at(i);

    vector<vector<int> > dp(N + 1, vector<int>(X + 1, false));
    dp[0][0] = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= X; j++)
        {
            if (dp[i][j])
            {
                if (j + a[i] <= X)
                {
                    dp[i + 1][j + a[i]] = true;
                }
                if (j + b[i] <= X)
                {
                    dp[i + 1][j + b[i]] = true;
                }
            }
        }
    }
    cout << (dp[N][X] ? "Yes" : "No") << '\n';
}
