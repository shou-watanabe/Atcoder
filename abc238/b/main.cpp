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

    VI args(n);
    REP(i, n)
    {
        cin >> args.at(i);
    }
    set<int> cuts;
    int arg_sum = 0;
    for (int arg : args)
    {
        arg_sum += arg;
        int cut = arg_sum % 360;
        if (!cuts.count(cut))
            cuts.insert(cut);
    }
    int max_arg = -1;
    int sub;
    int pre_arg = 0;
    int i = 0;
    for (int arg : cuts)
    {
        sub = arg - pre_arg;
        if (sub > max_arg)
            max_arg = sub;
        pre_arg = arg;
        i++;
        if (i == cuts.size())
        {
            sub = 360 - arg;
            if (sub > max_arg)
                max_arg = sub;
        }
    }
    cout << max_arg << endl;
}
