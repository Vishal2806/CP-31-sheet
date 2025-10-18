// Hello i am Vishal Vishwakarma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }

        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((i == 0 || i == 9 || j == 0 || j == 9) && arr[i][j] == 'X')
                    sum += 1;
                else if ((i == 1 || i == 8 || j == 1 || j == 8) && arr[i][j] == 'X')
                    sum += 2;
                else if ((i == 2 || i == 7 || j == 2 || j == 7) && arr[i][j] == 'X')
                    sum += 3;
                else if ((i == 3 || i == 6 || j == 3 || j == 6) && arr[i][j] == 'X')
                    sum += 4;
                else if ((i == 4 || i == 5 || j == 4 || j == 5) && arr[i][j] == 'X')
                    sum += 5;
            }
        }
        cout << sum << endl;
    }
}
