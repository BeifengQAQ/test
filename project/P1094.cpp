#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int Max,n,a[100000];
    scanf("%d\n%d",&Max,&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int i=0,j=n-1,count=0;
    while(1){
        if(i==j){
            count++;
            break;
        }
        else if(i<j){
            if(a[i]+a[j]<=Max){
                i++,j--;
                count++;
                continue;
            }
            else{
                j--;
                count++;
                continue;
            }
        }
        else
            break;
    }
    printf("%d\n",count);
    system("pause");
    return 0;
}
