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
    struct node *temp,*nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=NULL;
    if(!head){
        head=nn;
        return;
    }
    temp=head;
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
        struct node *temp=head,*t;
        if(!head->next){
            head=head->next;
            free(temp);
        }
        while(temp->next->next){
            temp=temp->next;
        }
        t=temp->next;
        temp->next=NULL;
        free(t);

        /*while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        */
    }
}


void display(){
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
    cout<<"\n";
}

void ReverseDisplay(struct node *temp2){
    struct node *temp=temp2;
    if(temp){
        
        ReverseDisplay(temp->next);
        cout<<temp->data;
        if(temp!=head){
            cout<<"->";
        }
    }
}

void Reverse(){
    struct node *pre=NULL,*cur=head,*fr;
    while(cur!=NULL){
        fr=cur->next;
        cur->next=pre;
        pre=cur;
        cur=fr;
    }
    head=pre;
}

void search(int val){
    struct node *temp=head;
    while(temp){
        if(val==temp->data){
            cout<<"Found";
            return;
        }
        else{
            temp=temp->next;
        }
    }
    cout<<"Not Found";
}


/*  bool Compare(struct node *head1,*head2){
    struct node *temp1=head1,*temp2=head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data==temp2->data){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
            return false;

    }
    if(temp1==NULL && temp2==NULL){
        return true;
    }
    else
        return false;

    }
*/

int main(){
    for(int i=1;i<=10;i++){
        insertB(i);
    }
    display();
    deleteB();
    display();
    //insertE(20);
    //display();
    //deleteE();
    //display();
    //ReverseDisplay(head);
    //cout<<"\n";
    //Reverse();
    //display();
    search(8);
}