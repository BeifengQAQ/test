#include<bits/stdc++.h>

using namespace std;


int find(int n){
    for(int i=3;i<sqrt(n)+1;i=i+2){
        if(n%i==0&&(n/i)%2==0)
            return i;
    }
    return 0;
}

int main(){
    int num,n,step;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        step=0;
        scanf("%d",&n);
        while(n!=1){
            if(n%2==1)
                n--,step++;
            else{
                if(find(n))
                    n=n/find(n),step++;
                else
                    n--,step++;
            }
        }
        if(step%2==1)
            printf("FastestFinger\n");
        else
            printf("Ashishgup\n");

    }
    system("pause");


}