#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> res(N, vector<char>(N, '-'));
    for (int i = 0; i < M; i++)
    {
        res[A.at(i) - 1][B.at(i) - 1] = 'x';
        res[B.at(i) - 1][A.at(i) - 1] = 'o';
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j != 0)
                cout << ' ';
            cout << res[j][i];
        }
        cout << endl;
    }
}
