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
    string s;
    cin >> s;

    int direction = 0;
    PII point = paired(0, 0);

    REP(i, n)
    {
        if (s.at(i) == 'S')
        {
            switch (direction)
            {
            case 0:
                point.first++;
                break;
            case 1:
                point.second--;
                break;
            case 2:
                point.first--;
                break;
            case 3:
                point.second++;
                break;
            default:
                break;
            }
        }
        else
        {
            if (direction == 3)
                direction = 0;
            else
            {
                direction++;
            }
        }
    }
    cout << point.first << " " << point.second << endl;
}
