#include"bits/stdc++.h"

using namespace std;

long long int a[100000];
int main(){
    int n,x;
    long long int sum=0;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i-1]>x)
            sum=sum+a[i-1]-x,a[i-1]=x;
        if(a[i-1]+a[i]>x)
            sum=sum+a[i]+a[i-1]-x,a[i]=x-a[i-1];
        if(i+1==n)
            break;
        if(a[i]+a[i+1]>x){
            sum=sum+a[i]+a[i+1]-x,a[i+1]=x-a[i];
        }
    }
    printf("%lld\n",sum);
    system("pause");
    return 0;
}