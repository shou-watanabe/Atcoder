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

bool is_char_acgt(char c)
{
    return (c == 'A' || c == 'C' || c == 'G' || c == 'T');
}

int main()
{
    string s;
    cin >> s;

    int tmp_size = 0;
    int max_size = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (is_char_acgt(s.at(i)))
        {
            tmp_size++;
            if (max_size < tmp_size)
                max_size = tmp_size;
        }
        else
        {
            if (max_size < tmp_size)
                max_size = tmp_size;
            tmp_size = 0;
        }
    }
    cout << max_size << endl;
}
