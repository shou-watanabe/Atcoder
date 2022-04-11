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

bool not_dup(int name_index, int str_index, vector<pair<string, string>> names, string s, int n)
{
    // cout << s << endl;
    if (name_index == n)
        return (true);
    // cout << name_index << endl;
    if (s.find(names.at(name_index).first) == std::string::npos)
    {
        if (not_dup(name_index + 1, str_index, names, s + names.at(name_index).first, n))
            return (true);
    }
    // cout << name_index << endl;
    if (s.find(names.at(name_index).second) == std::string::npos)
    {
        if (not_dup(name_index + 1, str_index, names, s + names.at(name_index).second, n))
            return (true);
    }
    // cout << name_index << endl;
    return (false);
}

signed main()
{
    int n;
    cin >> n;

    vector<pair<string, string>> names;
    REP(i, n)
    {
        string s;
        string t;
        cin >> s >> t;
        pair<string, string> name = paired(s, t);
        names.push_back(name);
    }

    REP(i, 10)
    {
        REP(j, n)
        {
            REP(k, n)
            {
                if (j == k)
                    continue;
                if (names.at(j).at(i) == names.at(j).at(i) || names.at(j).at(i) == names.at(j).at(i))
                //
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
