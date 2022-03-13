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

bool compare_by_b(pair<PII, char> a, pair<PII, char> b)
{
    if (a.first.second != b.first.second)
    {
        return a.first.second < b.first.second;
    }
    else
    {
        return a.first.first < b.first.first;
    }
}

signed main()
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
    vector<pair<PII, char>> v(n);
    REP(i, n)
    {
        v.at(i) = paired(coord.at(i), s.at(i));
    }
    sort(v.begin(), v.end(), compare_by_b);
    // for (auto e : (v))
    // {
    //     cout << e.first.first << " " << e.first.second << " " << e.second << endl;
    // }
    int current_y = v.at(0).first.second;
    int r_min = 1000000001;
    int l_max = -1;
    REP(i, n)
    {
        if (current_y != v.at(i).first.second)
        {
            r_min = 1000000001;
            l_max = -1;
            if (v.at(i).second == 'L' && v.at(i).first.first > l_max)
                l_max = v.at(i).first.first;
            else if (v.at(i).second == 'R' && v.at(i).first.first < r_min)
                r_min = v.at(i).first.first;
            current_y = v.at(i).first.second;
        }
        else
        {
            if (v.at(i).second == 'L' && v.at(i).first.first > l_max)
                l_max = v.at(i).first.first;
            else if (v.at(i).second == 'R' && v.at(i).first.first < r_min)
                r_min = v.at(i).first.first;
            if (r_min != 1000000001 && l_max != -1 && l_max > r_min)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
