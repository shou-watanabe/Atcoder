#include <bits/stdc++.h>
using namespace std;

bool check_col(vector<string> board, int y, int x)
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (board[y + i][x] == '#')
            cnt++;
    }
    if (cnt >= 4)
        return true;
    return false;
}

bool check_row(vector<string> board, int y, int x)
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (board[y][x + i] == '#')
            cnt++;
    }
    if (cnt >= 4)
        return true;
    return false;
}

bool check_diago_right_down(vector<string> board, int y, int x)
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (board[y + i][x + i] == '#')
            cnt++;
    }
    if (cnt >= 4)
        return true;
    return false;
}

bool check_diago_right_up(vector<string> board, int y, int x)
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (board[y - i][x + i] == '#')
            cnt++;
    }
    if (cnt >= 4)
        return true;
    return false;
}

int main()
{
    int N;
    cin >> N;
    vector<string> board;
    string str;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        board.push_back(str);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((j + 5) < N)
            {
                if (check_row(board, i, j))
                {
                    cout << "Yes" << endl;
                    exit(0);
                }
            }
            if ((i + 5) < N)
            {
                if (check_col(board, i, j))
                {
                    cout << "Yes" << endl;
                    exit(0);
                }
            }
            if (((i + 5) < N) && ((j + 5) < N))
            {
                if (check_diago_right_down(board, i, j))
                {
                    cout << "Yes" << endl;
                    exit(0);
                }
            }
            if ((0 <= (i - 5)) && ((j + 5) < N))
            {
                if (check_diago_right_up(board, i, j))
                {
                    cout << "Yes" << endl;
                    exit(0);
                }
            }
        }
    }
    cout << "No" << endl;
}
