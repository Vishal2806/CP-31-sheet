#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        
        int digits = to_string(n).size();
        
        int first_digit = n / pow(10, digits - 1);
        
        int ans = 9 * (digits - 1) + first_digit;
        
        cout << ans << endl;
    }
    return 0;
}
