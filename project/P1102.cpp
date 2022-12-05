#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,c;
    cin>>n>>c;
    long long int a[200000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int sum=0,count=0;
   for(int i=0;i<n;i++){
    if(i>=1&&a[i-1]==a[i]){
        sum+=count;
        continue;
    }
    int low=0,high=n-1,mid=0,temp=a[i]+c;
    count=0;
    while (low < high) {
		mid = (low + high) / 2;
		if (temp <= a[mid]) high = mid;
		else if (temp > a[mid]) low = mid + 1;
    }
    if(a[low]==temp){
        count=1;
    while(low!=n-1&&a[low+1]==a[low])
        count++,low++;
   }
   sum+=count;
   }
   cout<<sum<<endl;
    system("pause");
    return 0;
}

