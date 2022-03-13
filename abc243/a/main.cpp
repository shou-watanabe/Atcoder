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
    int v, a, b, c;
    cin >> v >> a >> b >> c;

    int remain = v;
    while (1)
    {
        remain -= a;
        if (remain < 0)
        {
            cout << "F" << endl;
            exit(0);
        }
        remain -= b;
        if (remain < 0)
        {
            cout << "M" << endl;
            exit(0);
        }
        remain -= c;
        if (remain < 0)
        {
            cout << "T" << endl;
            exit(0);
        }
    }
}
