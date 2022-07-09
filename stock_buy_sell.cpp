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
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    //<!***************** BRUTE FORCE ***************!>

    // int maxi = 0;

    // for(int i=0 ; i<n-1;i++)
    // {
    //     for(int j =i+1 ; j<n ;j++)
    //     {
    //         if(a[j]>a[i])
    //         {
    //             int sum = a[j] - a[i];
    //             maxi = max(sum,maxi);
    //         }
    //     }
    // }
    // cout<<maxi<<endl;

    //<!***************** OPTIMAL ***************!>
    int maxi = 0;
    int min_price = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        min_price = min(min_price, a[i]);
        maxi = max(maxi, a[i] - min_price);
    }
    cout<<maxi<<endl;

    return 0;
}