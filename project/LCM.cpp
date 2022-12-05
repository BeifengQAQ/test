#include<bits/stdc++.h>

using namespace std;


int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        if(2*l>r)
            printf("-1 -1\n");
        else{
            printf("%d %d\n",l,2*l);
        }
    }
}