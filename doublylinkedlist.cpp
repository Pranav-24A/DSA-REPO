#include <iostream>
using namespace std;
class node{
    public:
    int key;
    int data;
    node* prev;
    node* next;
    node(){
        key=0;
        data=0;
        next=NULL;
        prev=NULL;
    }
    node(int k,int d){
        key=k;
        data=d;
        next=NULL;
        prev=NULL;
    }
};
class doublylinkedlist{
    public:
     node* head;
    doublylinkedlist(){
        head=NULL;
    }
    doublylinkedlist(node* n){
        head=n;
    }
    node * nodeexist(int k){
        node* temp=NULL;
        node* ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k){
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    void appendnode(node * n){
        if(nodeexist(n->key)!=NULL){
            cout<<"Node with the key value already exist \n";
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"node appended while head value is null \n";
            }
            else{
                node* ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->prev=ptr;
                cout<<"Node appended \n";
            }            
        }
    }
    void prependnode(node * n){
        if(nodeexist(n->key)!=NULL){
            cout<<"node with the key value already exist \n";
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"node prepended \n";
            }
            else{
                head->prev=n;
                n->next=head;
                head=n;
                cout<<"Node prepended \n";
            }
        }
    }
    void insertnode(int k,node* n){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"No node with the key value exist \n";
        }
        else{
            if(nodeexist(n->key)!=NULL){
                cout<<"Node with key value already exist\n";
            }
            else{
                node * nextnode=ptr->next;//Here we use this because ther is an prev pointer additional to an next pointer and also it used to check if the Node after which insertion takes place,if the 
                //node is at the end,start (or) in between;
                if(nextnode==NULL){//This if will be executed when the node is at the end or at the begining;
                    ptr->next=n;
                    n->prev=ptr;
                    cout<<"Node inserted \n";              
                }
                else{
                    n->next=nextnode;
                    nextnode->prev=n;
                    ptr->next=n;
                    n->prev=ptr;
                    cout<<"Node inserted succesfully \n";
                }   
            }
        }
    }
    void reversesinglylinkedlist(node * n){
        node * currptr;
    }
    void deletenode(int k){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"Node with the key value does not exist \n";
        }
        else{
            if(head->key==k){
                head=head->next;
                cout<<"head Node unlinked \n";
            }
            else{
                node* nextnode=ptr->next;
                node* prevnode=ptr->prev;
                if(nextnode==NULL){
                    prevnode->next=NULL;   
                    cout<<"Node at the end unlinked \n"; 
                }
                else{
                    prevnode->next=nextnode;
                    nextnode->prev=prevnode;
                    cout<<"Node at the middle unlinked \n";
                }
               }
           }  
    }
    void nodeupdate(int k,int d){
        node * ptr=nodeexist(k);
            if(ptr!=NULL){
                ptr->data=d;
                cout<<"Value updated \n";
            }
            else{
                cout<<"No node with the key value exist \n";
            }
        }

    void printnode(){
        if(head==NULL){
            cout<<"No nodes in linked list \n";
        }  
        else{
            cout<<"Doubly linked list values \n";
            node * temp=head;
            while(temp!=NULL){
                cout<<"("<<temp->key<<","<<temp->data<<") --> ";
                temp=temp->next;
            }
        }              
    }
};
int main(){
    node n1(1,10);
    node n2(2,20);
    node n3(3,30);
    node n4(4,40);
    node n5(5,50);
    doublylinkedlist d1;
    d1.appendnode(&n1);
    d1.appendnode(&n2);
    d1.appendnode(&n3);
    d1.prependnode(&n4);
    d1.insertnode(2,&n5);
    d1.nodeupdate(5,60);
    d1.printnode();
}