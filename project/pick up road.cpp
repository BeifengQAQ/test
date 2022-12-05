#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i=2;i<=n+1;i++)
    {
        if(a[i] < a[i-1])
        {
            ans += abs(a[i] - a[i-1]);
        }
    }
    cout << ans;
    system("pause");
    return 0;
}