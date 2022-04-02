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

int f(int a, int b)
{
    return a * a * a + a * a * b + a * b * b + b * b * b;
}

signed main()
{
    int n;
    cin >> n;

    int j = 1000000;
    int x = 8e18;
    FOR(i, 0, 1000000)
    {
        while (f(i, j) >= n && j >= 0)
        {
            x = min(x, f(i, j));
            j--;
        }
    }
    cout << x << endl;
    return 0;
}
