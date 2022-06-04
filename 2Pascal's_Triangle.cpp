#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vec vector<lli>
#define vecp vector<pair<lli, lli>>
#define pb push_back
#define ma map<lli, lli>
#define se set<lli>
#define f first
#define s second
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (j == 0)
                {
                    a[i][j] = 1;
                }
                else if (j == i - 1)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                }
            }
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}