#include"bits/stdc++.h"

using namespace std;

int main(){
    int num;
    int a[60];
    ios::sync_with_stdio(false);
    cin>>num;
    while(num>0){
        int n,parity=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1)
                parity++;
        }
        if(parity%2==0){
            cout<<"YES"<<endl;
            num--;
            continue;
        }
        bool temp=false;
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]-a[i+1]==1||a[i+1]-a[i]==1){
                temp=true;
                break;
            }
        }
        if(temp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        num--;
    }
    system("pause");
    return 0;
}