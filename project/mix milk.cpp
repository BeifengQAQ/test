#include "bits/stdc++.h"

using namespace std;

struct milk{
    int x,y;
    bool operator < (milk b){
        return x<b.x;
    }
};

milk a[5000];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>a[i].x>>a[i].y;
    sort(a,a+m);
    long long int i=0,sum=0;
    while(n>0){
        if(n-a[i].y<0)
            sum=sum+n*a[i].x,n=0;
        else
            sum=sum+a[i].x*a[i].y,n-=a[i].y,i++;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
