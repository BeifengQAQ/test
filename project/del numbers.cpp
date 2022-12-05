#include"bits/stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    int k;
    cin>>str;
    cin>>k;
    int temp=0;
    while(k!=0){
        if(temp+k>=str.size()){
            str.erase(temp,k);
            break;
        }
        string sub;
        sub=str.substr(temp,k+1);
        char Min=0;
        for(int i=1;i<k+1;i++){
            if(sub[Min]>sub[i])
                Min=i;
        }
        str.erase(temp,Min);
        k=k-Min;
        temp++;
    }
    int i;
    for(i=0;i<str.size();i++)
        if(str[i]!='0')
            break;
    for(int j=i;j<str.size();j++)
        cout<<str[j];
    if(i==str.size())
        cout<<0;
    cout<<endl;
    system("pause");
    return 0;
}
