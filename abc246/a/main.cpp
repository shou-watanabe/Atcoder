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
    VP coords(3);

    REP(i, 3)
    {
        int x, y;
        cin >> x >> y;
        coords.at(i) = paired(x, y);
    }

    // if (coords.at(0).first == coords.at(1).first && coords.at(0).second != coords.at(1).second)

    VP flag(3);
    REP(i, 3)
    {
        flag.at(i) = paired(0, 0);
    }

    FOR(i, 0, 2)
    {
        FOR(j, 1, 3)
        {
            if (coords.at(i).first == coords.at(j).first && coords.at(i).second != coords.at(j).second)
            {
                flag.at(i).first = 1;
                flag.at(j).first = 1;
            }
            if (coords.at(i).first != coords.at(j).first && coords.at(i).second == coords.at(j).second)
            {
                flag.at(i).second = 1;
                flag.at(j).second = 1;
            }
        }
    }

    PII ans = paired(0, 0);
    REP(i, 3)
    {
        if (flag.at(i).first == 0)
            ans.first = coords.at(i).first;
        if (flag.at(i).second == 0)
            ans.second = coords.at(i).second;
    }

    cout << ans.first << " " << ans.second << endl;
}
