#include "bits/stdc++.h"

using namespace std;

struct group
{
    int num,val;
};

group gp[100000];
int num=0;

void insert(int k){
    int flag=0,find=0,n=100000;
    for(int i=0;i<num;i++){
        if(k==gp[i].val+1){
            find=1;
            if(n>gp[i].num){
                n=gp[i].num;
                flag=i;
            }
        }
    }
    if(find==1){
        gp[flag].num++;
        gp[flag].val++;
    }
    else{
        gp[num].val=k;
        gp[num].num=1;
        num++;
    }
}


int main()
{
    ios::sync_with_stdio(false);
    long long int n,a[100000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        insert(a[i]);
    int ans=100000;
    for(int i=0;i<num;i++)
        ans=min(ans,gp[i].num);
    cout<<ans<<endl;
    system("pause");
    return 0;
}
