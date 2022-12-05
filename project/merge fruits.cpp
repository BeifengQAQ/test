#include"bits/stdc++.h"
using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
    priority_queue<int,vector<int>,greater<int>> a;
    int num;
    long long int sum=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int temp;
        scanf("%d",&temp);
        a.push(temp);
    }
    while(a.size()!=1){
        int p,q;
        p=a.top();
        a.pop();
        q=a.top();
        a.pop();
        sum=sum+p;
        sum=sum+q;
        a.push(p+q);
    }
    printf("%lld\n",sum);
    system("pause");
    return 0;
}