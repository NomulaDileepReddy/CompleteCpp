#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

void insertb(int val){
    struct node *nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=head;;
    head=nn;
}

void deleteb(){
    if(head){
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
}

void display(){
    if(head){
        struct node *p=head;
        while(p){
            cout<<"->"<<p->data;
            p=p->next;
        }
    }
    printf("\n");
}

int main(){
    int x;
    for(x=1;x<=10;x++){
        insertb(x);
    }
    display();
    deleteb();
    display();
}