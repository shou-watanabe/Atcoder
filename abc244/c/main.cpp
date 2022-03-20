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
    int times = 0;
    ;
    int MAX_NUM = 2 * n + 1;
    bool finish_flag = false;

    int min = 0;
    set<int> nums;
    while (times < MAX_NUM)
    {
        REP(i, MAX_NUM)
        {
            int num = i + 1;
            if (!nums.count(num))
            {
                nums.insert(num);
                cout << num << endl;
                break;
            }
            else if (num == MAX_NUM)
            {
                finish_flag = true;
                break;
            }
        }
        if (finish_flag)
            break;

        int input_num;
        cin >> input_num;
        if (input_num == 0)
        {
            return 0;
        }
        if (!nums.count(input_num))
        {
            nums.insert(input_num);
        }

        times++;
    }
}
