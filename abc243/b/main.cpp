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
    VI a(n);
    VI b(n);
    REP(i, n)
    {
        cin >> a.at(i);
    }
    REP(i, n)
    {
        cin >> b.at(i);
    }
    int hit_cnt = 0;
    int blow_cnt = 0;
    REP(i, n)
    {
        REP(j, n)
        {
            if (a.at(i) == b.at(j))
            {
                if (i == j)
                    hit_cnt++;
                else
                    blow_cnt++;
            }
        }
    }
    cout << hit_cnt << endl;
    cout << blow_cnt << endl;
}
