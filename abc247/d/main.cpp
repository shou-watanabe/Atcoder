#include <bits/stdc++.h>
#define int long long
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

template <typename T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

signed main()
{
    int n;
    cin >> n;
    bool flag = false;

    queue<pair<int, int>> balls;
    REP(i, n)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            int x;
            int c;
            cin >> x >> c;
            PII ball_cnt = paired(x, c);
            balls.push(ball_cnt);
        }
        else
        {
            flag = true;
            int c;
            cin >> c;
            int sum = 0;
            while (true)
            {
                int cnt = balls.front().second;
                if (c < cnt)
                {
                    // cout << "bef: " << balls.front().second << "num: " << balls.front().first << endl;
                    balls.front().second -= c;
                    // cout << "aft: " << balls.front().second << "num: " << balls.front().first << endl;
                    sum += balls.front().first * c;
                    break;
                }
                else
                {
                    c -= cnt;
                    sum += balls.front().first * balls.front().second;
                    balls.pop();
                }
                if (balls.empty())
                    break;
            }
            cout << sum << endl;
        }
    }
    if (!flag)
        cout << endl;
    return 0;
}
