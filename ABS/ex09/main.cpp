#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
    string S;
    cin >> S;

    string T = "";
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i)
        reverse(divide[i].begin(), divide[i].end());

    bool is_all_div = true;
    for (int i = 0; i < S.size();)
    {
        bool is_divide = false;
        for (int j = 0; j < 4; ++j)
        {
            string d = divide[j];
            if (S.substr(i, d.size()) == d)
            {
                is_divide = true;
                i += d.size();
            }
        }
        if (!is_divide)
        {
            is_all_div = false;
            break;
        }
    }

    if (is_all_div)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
