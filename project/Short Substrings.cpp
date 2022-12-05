#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    ios::sync_with_stdio(false);
    cin>>n;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        int j=0;
        if(j==0)
            cout<<a[j++];
        for(;j<a.size();j+=2)
            cout<<a[j];
        cout<<endl;
    }
    system("pause");
    return 0;
}