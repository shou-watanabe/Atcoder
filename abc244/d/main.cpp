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
    string s, s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    s = s1 + s2 + s3;
    string t, t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    t = t1 + t2 + t3;

    int diff_cnt = 0;
    REP(i, 3)
    {
        if (s.at(i) != t.at(i))
            diff_cnt++;
    }
    if (diff_cnt == 0 || diff_cnt == 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
