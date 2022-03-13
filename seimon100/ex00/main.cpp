#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<PII> VP;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

#define pb push_back
#define paired make_pair
#define ALL(a) (a).begin(), (a).end()
#define PRINT(V)       \
    for (auto v : (V)) \
    cout << v << ' '
#define SORT(V) sort((V).begin(), (V).end())
#define RSORT(V) sort((V).rbegin(), (V).rend())

int main()
{
    int n, x;
    while (true)
    {
        cin >> n >> x;
        if (n == 0 && x == 0)
            break;
        if (x < 6)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        FOR(i, 1, n - 1)
        {
            FOR(j, i + 1, n)
            {
                FOR(k, j + 1, n + 1)
                {
                    if (i + j + k == x)
                        cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}
