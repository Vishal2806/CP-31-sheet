// Hello i am Vishal Vishwakarma
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());

        int mid = -1;

        // find split point
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] % nums[i] != 0)
            {
                mid = i + 1;
                break;
            }
        }

        if (mid == -1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> b(nums.begin(), nums.begin() + mid);
        vector<int> c(nums.begin() + mid, nums.end());

        cout << b.size() << " " << c.size() << endl;
        for (auto i : b)
            cout << i << " ";
        cout << endl;
        for (auto j : c)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
