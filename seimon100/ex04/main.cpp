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
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int res = 2147483647;
    if (a + b < 2 * c)
    {
        res = a * x + b * y;
    }
    else
    {
        FOR(ab, 0, 201010)
        {
            int sum = c * ab;
            int a_num = x - ab / 2;
            int b_num = y - ab / 2;
            if (0 < a_num)
                sum += a_num * a;
            if (0 < b_num)
                sum += b_num * b;
            chmin(res, sum);
        }
    }
    cout << res << endl;
}
