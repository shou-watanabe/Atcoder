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
    int n, m, k, s, t, x;
    cin >> n >> m >> k >> s >> t >> x;
    VP edges(m);
    REP(i, m)
    {
        int u, v;
        cin >> u >> v;
        edges.at(i) = paired(u, v);
    }

    VI a(k);
    REP(i, k)
    {
        a.at(i) = 0;
    }
    a.at(0) = s;
    a.at(k - 1) = t;

    VI tmp_a = a;
}
