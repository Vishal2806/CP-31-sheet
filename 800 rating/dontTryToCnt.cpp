// Hello i am Vishal Vishwakarma
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cnt = 0;

        // Keep doubling until x is at least as long as s
        while (x.length() < s.length()) {
            x += x;
            cnt++;
        }

        // Check up to two extra times to handle boundary overlaps
        bool found = false;
        for (int i = 0; i < 3; i++) {
            if (x.find(s) != string::npos) {
                cout << cnt << endl;
                found = true;
                break;
            }
            x += x; // double once more if not found
            cnt++;
        }

        if (!found) cout << -1 << endl;
    }
}
