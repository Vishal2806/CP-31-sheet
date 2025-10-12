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
        string arr;
        cin >> arr;

        int cntOfEmptyCells = 0;
        bool isTrue = false;

        for (int i = 1; i < n - 1; i++)
        {

            if (arr[i - 1] == '.' && arr[i] == '.' && arr[i + 1] == '.')
            {
                isTrue = true;
            }
        }
        for(int i =0;i<n;i++){
             if (arr[i] == '.')
                cntOfEmptyCells++;
        }
        if (isTrue == true) // ✅ Corrected this line
            cout  << 2 << endl;
        else
            cout << cntOfEmptyCells << endl;
    }
}
