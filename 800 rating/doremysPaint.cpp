// Hello i am Vishal Vishwakarma
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (mp.size() >= 3) {
            cout << "NO" << endl;
        }
        else if (mp.size() == 2) {
            auto it = mp.begin();
            int freq1 = it->second;
            it++;
            int freq2 = it->second;

            if (abs(freq1 - freq2) <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            
            cout << "YES" << endl;
        }
    }
}
