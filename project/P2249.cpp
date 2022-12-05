//二分查找

#include "bits/stdc++.h"

using namespace std;

int a[1000000];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        int temp,low=0,high=n-1;
        cin>>temp;
        int mid=0;
        while (low < high) {
		mid = (low + high) / 2;
		if (temp <= a[mid]) high = mid;
		else if (temp > a[mid]) low = mid + 1;
        }
        if(a[low]==temp){
            cout<<low+1<<" ";
        }
        else
            cout<<-1<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
