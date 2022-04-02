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
    int n, k, x;
    cin >> n >> k >> x;

    VI a(n);
    REP(i, n)
    {
        cin >> a.at(i);
    }

    int k_cnt = 0;
    bool end_flag = false;
    REP(i, n)
    {
        while (a.at(i) - x >= 0)
        {
            if (a.at(i) - x >= 0)
            {
                a.at(i) -= x;
                k_cnt++;
            }
            if (k_cnt == k)
            {
                end_flag = true;
                break;
            }
        }
        if (end_flag)
            break;
    }

    int ans = 0;
    RSORT(a);
    REP(i, n)
    {
        if (k_cnt == k)
        {
            ans += a.at(i);
        }
        else
            k_cnt++;
    }
    cout << ans << endl;
    return 0;
}
