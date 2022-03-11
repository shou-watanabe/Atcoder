#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    int is_exist = false;
    vector<pair<int, int>> offsets = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
    for (pair<int, int> offset1 : offsets)
    {
        for (pair<int, int> offset2 : offsets)
        {
            if (x1 + offset1.first == x2 + offset2.first && y1 + offset1.second == y2 + offset2.second)
                is_exist = true;
        }
    }
    is_exist ? cout << "Yes" << endl : cout << "No" << endl;
}
