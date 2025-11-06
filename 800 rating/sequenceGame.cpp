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
        {
            cin >> nums[i];
        }
        vector<int> res;
        res.push_back(nums[0]);
        for (int i = 1; i < n; i++)
        {
            if (abs(nums[i] > nums[i - 1]))
            {
                res.push_back(nums[i]);
                res.push_back(nums[i]);
            }
            else
            {
                res.push_back(nums[i]);
            }
        }
        cout << res.size() << endl;
        for (auto i : res)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}