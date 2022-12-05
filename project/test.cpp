#include "bits/stdc++.h"

using namespace std;

bool cmp(int a,int b){
    return a>b;
}

int a[200000];
vector<int> b[200];
int c[200] = {0};
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[a[i]%m].push_back(a[i]);
    }
    for(int i=0;i<m;i++)
        sort(b[i].begin(),b[i].end(),cmp);
    long long int sum = 0,result = 0;
    for(int i=0;i<k;i++){
        int index = a[i] % m;
        sum += b[index][c[index]];
        c[index]++;
    }
    result = sum;
    for(int i = k;i<n;i++){
        long long int a1 = b[a[i-k]%m][c[a[i-k]%m]-1];
        c[a[i-k]%m]--;
        long long int a2 = b[a[i]%m][c[a[i]%m]];
        sum += a2 - a1;
        result = max(result,sum);
        c[a[i]%m]++;
    }
    cout<<result<<endl;
    return 0;
}
