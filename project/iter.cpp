#include "bits/stdc++.h"

using namespace std;

struct node{
    node *next;
    int x;
};

class con{
public:
    node *p;
    int a[50];
};

class Itercon{
public:
    node *current;
    int *array;
    Itercon(con *p,int n){
        current = p->p;
        array = p->a+n;
    }
    int& operator*(){
        if(current !=NULL)
            return this->current->x;
        return *array;
    }
    bool operator!=(Itercon p){
        return this->array != p.array;
    }
    void operator++(){
        if(this->current!=NULL)
            this->current = this->current->next;
        else
            array++;
    }
};

void Add(int &a){
    a++;
}

int main()
{
    node* first = new node;
    first->x = 1;
    node* list = new node;
    list->x = 2;
    list->next = NULL;
    first->next = list;
    con c;
    c.p = first;
    for(int i =0; i<50;i++)
        c.a[i] = i;
    Itercon begin(&c,0),end(&c,50);
    cout<<"之前元素："<<first->x<<" "<< list->x <<endl;
    for(int i =0; i<50;i++)
        cout <<c.a[i]<<"  ";
    for_each(begin,end,Add);
    cout<<"\n之后元素："<<first->x<<" "<< list->x <<endl;
    for(int i =0; i<50;i++)
        cout <<c.a[i]<<"  ";
    return 0;
}
