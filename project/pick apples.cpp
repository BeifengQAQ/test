#include "bits/stdc++.h"

using namespace std;

struct apple{
    int x,y;
    bool operator < (apple temp){
        return y < temp.y;
    }

};

apple c[5000];
int main()
{
    ios::sync_with_stdio(false);
    int n,st,a,b,result=0;
    cin >> n >> st;
    cin >> a >> b;
    for(int i=0;i<n;i++){
        cin >> c[i].x >> c[i].y;
    }
    sort(c,c+n);
    for(int i=0;i<n;i++){
        if(c[i].x<=b||c[i].x>=a&&c[i].x<=a+b)
            result++,st-=c[i].y;
        if(st-c[i+1].y<0&&i+1!=n)
            break;
    }
    cout<<result<<endl;
    system("pause");
    return 0;
}
