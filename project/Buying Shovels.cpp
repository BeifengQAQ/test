#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int num;
    cin>>num;
    while(num>0){
        long long int n,k;
        cin>>n>>k;
        long long int Min=min(k,(long long int)sqrt(n)+1);
        long long int result=n;
        for(long long int i=1;i<=Min;i++){
            if(n%i==0){
                if(n/i<=k)
                    result=min(result,min(n/i,i));
                else
                    result=min(result,n/i);
            }
        }
        cout<<result<<endl;
        num--;
    }
    system("pause");
    return 0;
}