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

bool rec(VI nums, int i, int n, int k, VP pairs)
{
    if (i == n)
        return (true);

    if (i != 0)
    {
        if (abs(nums.at(i - 1) - pairs.at(i).first) <= k)
        {
            nums.push_back(pairs.at(i).first);
            if (rec(nums, i + 1, n, k, pairs))
                return true;
            nums.pop_back();
        }
        if (pairs.at(i).first == pairs.at(i).second)
            return false;
        if (abs(nums.at(i - 1) - pairs.at(i).second) <= k)
        {
            nums.push_back(pairs.at(i).second);
            if (rec(nums, i + 1, n, k, pairs))
                return true;
            nums.pop_back();
        }
        return false;
    }
    else
    {
        nums.push_back(pairs.at(i).first);
        if (rec(nums, i + 1, n, k, pairs))
            return true;
        nums.pop_back();
        if (pairs.at(i).first == pairs.at(i).second)
            return false;
        nums.push_back(pairs.at(i).second);
        if (rec(nums, i + 1, n, k, pairs))
            return true;
        return false;
    }
    return false;
}

signed main()
{
    int n, k;
    cin >> n >> k;

    VI a(n);
    REP(i, n)
    {
        cin >> a.at(i);
    }

    VI b(n);
    REP(i, n)
    {
        cin >> b.at(i);
    }

    VP pairs(n);
    REP(i, n)
    {
        pairs.at(i) = paired(a.at(i), b.at(i));
    }

    VI nums;
    bool ok = rec(nums, 0, n, k, pairs);
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
