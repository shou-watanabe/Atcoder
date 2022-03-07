#include <bits/stdc++.h>
using namespace std;

int main()
{
    int left, right;

    cin >> left >> right;

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;

        /* mid 歳以上かを聞いて、回答を yes/no で受け取る */
        cout << "Is the age same or more than " << mid << " ? (yes / no)" << endl;
        string ans;
        cin >> ans;

        /* 回答の応じて、年齢を絞る */
        if (ans == "yes")
            left = mid; // mid 歳以上なら、mid 歳以上 right 歳以下になるように
        else
            right = mid; // mid 歳未満なら、left 歳以上 mid 歳未満になるように
    }

    /* ズバリ当てる！ */
    cout << "The age is " << left << "!" << endl;
}
