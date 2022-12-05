#include<bits/stdc++.h>

using namespace std;

struct person
{
    int id;
    int time;
    bool operator <(person b){
        return time<b.time;
    }
};


int main(){
    int n;
    double sum=0;
    vector<person> a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        person temp;
        temp.id=i+1;
        scanf("%d",&temp.time);
        a.push_back(temp);
    }
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        printf("%d ",a[i].id);
        sum+=a[i].time*(n-i-1);
    }
    printf("\n%.2f\n",sum*1.0/n);
    system("pause");
    return 0;
}