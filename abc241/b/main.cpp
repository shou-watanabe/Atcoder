#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> A_used(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        A_used.at(i) = false;
    }

    vector<int> B(M);
    for (int i = 0; i < M; i++)
        cin >> B.at(i);

    for (int i = 0; i < M; i++)
    {
        int is_day_ok = false;
        for (int j = 0; j < N; j++)
        {
            if (!A_used.at(j) && A.at(j) == B.at(i))
            {
                A_used.at(j) = true;
                is_day_ok = true;
                break;
            }
        }
        if (!is_day_ok)
        {
            cout << "No" << endl;
            exit(0);
        }
    }

    cout << "Yes" << endl;
}
