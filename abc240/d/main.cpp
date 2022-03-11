#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> num_arr;
    int num;
    for (int i = 0; i < N; i++)
    {
        int can_push = true;
        cin >> num;
        int arr_size = num_arr.size();
        if (arr_size != 0 && num_arr.at(arr_size - 1) == num && arr_size >= num - 1)
        {
            for (int k = 0; k < num - 1; k++)
            {
                if (num_arr.at(arr_size - k - 1) != num)
                    break;
                if (k == num - 2)
                {
                    for (int j = 0; j < num - 1; j++)
                        num_arr.pop_back();
                    can_push = false;
                }
            }
        }
        if (can_push)
            num_arr.push_back(num);
        cout << num_arr.size() << endl;
    }
}
