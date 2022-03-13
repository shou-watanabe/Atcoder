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

int count_divisor(int num)
{
    int cnt = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
            if (i * i != num)
                cnt++;
        }
    }
    return (cnt);
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i += 2)
    {
        if (count_divisor(i) == 8)
            cnt++;
    }
    cout << cnt << endl;
}
