#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,a[1001]={0,};
    long long int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n+1);
    int i=0,j=n;
    while(i!=j){
        sum+=(a[j]-a[i])*(a[j]-a[i]);
        i++;
        if(i!=j)
            sum+=(a[j]-a[i])*(a[j]-a[i]),j--;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
