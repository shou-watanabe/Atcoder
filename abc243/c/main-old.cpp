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
    int n;
    cin >> n;
    int x, y;
    VP coord(n);
    REP(i, n)
    {
        cin >> x >> y;
        coord.at(i) = paired(x, y);
    }
    string s;
    cin >> s;
    REP(i, n - 1)
    {
        FOR(j, i + 1, n)
        {
            if (coord.at(i).second == coord.at(j).second)
            {
                if (s.at(i) != s.at(j))
                {
                    if (coord.at(i).first <= coord.at(j).first && s.at(i) == 'R')
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    else if (coord.at(i).first >= coord.at(j).first && s.at(i) == 'L')
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}
