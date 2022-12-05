#include<bits/stdc++.h>

using namespace std;

/*
要点：根据end时间排序，因为end时间决定了是否能进行下一场
*/
struct game{
    int begin;
    int end;
    bool operator < (game b){
        return end<b.end;
    }
};

int main(){
    int n;
    int sum=1;
    vector<game> a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        game temp;
        scanf("%d %d",&temp.begin,&temp.end);
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int temp=0;
    for(int i=1;i<n;i++){
        if(a[temp].end<=a[i].begin)
            sum++,temp=i;
    }
    printf("%d\n",sum);
    system("pause");
    return 0;

}