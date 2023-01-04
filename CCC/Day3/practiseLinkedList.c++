#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

void insertB(int val){
    struct node *nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=head;
    head=nn;
}


void insertE(int val){
    struct node *nn,*temp=head;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=NULL;
    if(!head){
        head=nn;
        return;
    }
    while(temp->next){
        temp=temp->next;
    }
    temp->next=nn;
}

void deleteB(){
    if(head){
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
}


void deleteE(){
    if(head){
        struct node *temp=head,*pre;
        while(temp->next){
            pre=temp;
            temp=temp->next;
        }
        pre->next=NULL;
        free(temp);
    }
}

void display(){
    cout<<"\n";
    if(head){
        struct node *temp=head;
        while(temp){
            cout<<temp->data;
            temp=temp->next;
            if(temp){
            cout<<"->";
            }
        }
        
    }
}

int main(){
    for(int i=1;i<=10;i++){
        insertB(i);
    }
    display();
    deleteB();
    display();
    insertE(20);
    display();
    deleteE();
    display();
}