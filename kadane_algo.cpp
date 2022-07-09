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
    vector<int> sub;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int cur=0;
    int maxi=INT_MIN;

    for(int i=0 ; i<n ; i++)
    {
        cur = cur + a[i];
        maxi = max(cur,maxi);

        if(cur<0)
        {
            cur=0;
        }
    }
    cout<<maxi<<endl;

    return 0;
}