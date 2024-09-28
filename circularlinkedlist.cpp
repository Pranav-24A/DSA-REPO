#include <iostream>
using namespace std;
class node{
    public:
    int key;
    int data;
    node * next;
    node(){
        key=0;
        data=0;
        next=NULL;
    }  
    node(int k,int d){
        key=k;
        data=d;
        next=NULL;
        }
};
class circularlinkedlist{
    public:
    node * head;
    circularlinkedlist(){
        head=NULL;
    }
    circularlinkedlist(node * n){
        head=n;
    }
    node * nodeexist(int k){
        node * temp=NULL;
        node * ptr=head;
        if(head==NULL){
            return temp;
        }
        else{
            do{
                if(ptr->key==k){
                    temp=ptr;
                }
                ptr=ptr->next;
            }while(ptr!=head);
            }
            return temp;
        }
    void appendnode(node * n){
        if(nodeexist(n->key)!=NULL){
            cout<<"Node with the key valuen already exist \n";
        }
        else{
            if(head==NULL){
                head=n;
                n->next=head;
                cout<<"Node have been appended while head is null \n";
            }
            else{
                node* ptr=head;
                while(ptr->next!=head){
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->next=head;
                cout<<"Node have been successfully appended \n";
            }
        }
    }
    void prependnode(node * n){
        if(nodeexist(n->key)!=NULL){
            cout<<"Node already exists \n";
        }
        else{
            node * ptr=head;
            while(ptr->next!=head){
                ptr=ptr->next;        
            }
            ptr->next=n;
            n->next=head;
            head=n;
            cout<<"Node successfully prepended \n";
        }
    }
    void insertnode(int k,node * n){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"No node with the key value exist \n";
        }
        else{
            if(nodeexist(n->key)!=NULL){
                cout<<"The node already exist \n";
            }
            else{
                if(ptr->next==head){
                    n->next=head;
                    ptr->next=n;
                    cout<<"Node inserted at the end \n";
                }
                else{
                    n->next=ptr->next;
                    ptr->next=n;
                    cout<<"Node inserted at the in between \n";
                }
            }
        }
    }
    void deletenode(int k){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"No node with the enterd key value is available \n";
        }
        else{
            if(ptr==head){
                if(ptr->next=NULL){
                    head=NULL;
                    cout<<"Node unlinked \n";
                }
                else{
                    node * ptr1=head;
                    while(ptr1->next!=head){
                        ptr1=ptr1->next;
                    }
                    ptr1->next=head->next;
                    head=head->next;
                    cout<<"node unlinked \n ";
                }
            }
            else{
                node * temp=NULL;
                node * prevptr=head;
                node * currentptr=head->next;
                while(currentptr!=NULL){
                    if(currentptr->key==k){
                        temp=currentptr;
                        currentptr=NULL;
                    }
                    else{
                        currentptr=currentptr->next;
                        prevptr=prevptr->next;
                    }
                }
                prevptr->next=temp->next;
                cout<<"Node unlinked \n";
            }
        }
    }
    void updatenode(int k,int d){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"Node with the key value does not exist \n";
        }
        else{
            ptr->data=d;
            cout<<"Data updated \n";
        }
    }
    void printnode(){
        if(head==NULL){
            cout<<"No nodes in the linked list \n";
        }
        else{
            node * temp=head;
            do{
                cout<<"("<<temp->key<<","<<temp->data<<") --> ";
                temp=temp->next;
            }while(temp!=head);
        }  
    }
};
int main(){
    node n1(1,10);
    node n2(2,20);
    node n3(3,30);
    node n4(4,40);
    node n5(5,50);
    node n6(6,60);
    circularlinkedlist c1;
    c1.appendnode(&n1);
    c1.appendnode(&n2);
    c1.prependnode(&n3);
    c1.appendnode(&n4);
    c1.insertnode(3,&n5);
    c1.insertnode(4,&n6);
    c1.deletenode(6);
    c1.updatenode(2,30);
    c1.printnode();
}