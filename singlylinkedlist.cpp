#include <iostream>
using namespace std;
class node{
    public:
    int data;
    int key;
    node* next; // Here the next pointer is created of node data type not of int data type
    //if the next pointer was of int data type then it can only store memory address of variables of int data type it cannot
    //store the memory address of an object of node class so we create an pointer of node data type;  
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
class singlylinkedlist{
    public:
    node *head;// The head pointer is inside class singly linked list because when an node object is created it only requires key,data,next
    //but a node only needs head whent it is connected to an linked list;
    singlylinkedlist(){
        head=NULL;
    }  
    singlylinkedlist(node * h){
        head=h;   
    }
    node * nodeexist(int k1){
        node *temp=NULL;//here we are using a pointer temp because inside the while loop we have given the 
        //condition as while(ptr!=0) so the loop will continue forever if ptr does not become null but at the same time we want the 
        //memory address stored in  ptr so we transfer it to temp;
        node *ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k1){
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    void appendnode(node* n){
        if(nodeexist(n->key)!=NULL){
            cout<<"Node with the key value already exist \n";
        }
        else{
            if(head==NULL){//This case will be executed when there is no node in the linked list ;
                head=n;
                cout<<"Node have been succesfully appended while head is null\n";
            }
            else{
                //this case will be executed when there is one or more node present in the linked list;
                node * ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node succesfully appended \n";
            }
        }
    }
    void prependnode(node * n){
        if(nodeexist(n->key)!=NULL){
            cout<<"The node with the key already exists \n";
        }
        else{
            n->next=head;
            head=n;
            cout<<"Node prepended \n";
        }
    }
    void insertnode(int k,node * n){
        node * ptr=nodeexist(k);
        if(ptr==NULL){
            cout<<"No node with the key value is not available \n";
        }
        else{
            if(nodeexist(n->key)!=NULL){
                cout<<"A node with the mentioned key value already exists \n";
            }
            else{
                n->next=ptr->next;
                ptr->next=n;
                cout<<"Node have been succesfullyinserted \n";
            }
        }       
    } 
        void deletenode(int k){
        if(head==NULL){
            cout<<"Singly linked list already empty \n";
        }
        else if(head!=NULL){
            if(head->key==k){//this case will be executed when the head node's key matches with the key k;
                head=head->next;
                cout<<"Node deleted \n";
            }
            else{
                //this case will be executed when the node to be deleted is inbetween or at the end;
                node* temp=NULL;
                node* prevpointer=head;
                node* currentpointer=head->next;
                while (currentpointer!=NULL){
                    if(currentpointer->key==k){
                        temp=currentpointer;
                        currentpointer=NULL;
                    }
                    else{
                        prevpointer=prevpointer->next;
                        currentpointer=currentpointer->next; 
                    }   
                }
                if(temp!=NULL){
                    //here we are doing this check because there is an chance that node with an key k is not present 
                    //at the linked list so the temp might point to null
                    prevpointer->next=temp->next;
                    cout<<"Node succesfully unlinked \n";
                }
                else{
                    cout<<"Node with the key value does not exist \n";
                }               
            }
        }
    }  
    void updatekey(int k,int d){
        if(nodeexist(k)==NULL){
            cout<<"No such node with the entered key value exists \n";
        }
        else{
            node * ptr=head;
            while(ptr!=NULL){        
            if(ptr->key==k){
                ptr->data=d;
                cout<<"Value updated \n";
            }
            ptr=ptr->next;
            }
        }
    }    
    void printlist(){
        node* temp=head;

        if(head==NULL){
            cout<<"There are no linked items in the list";
        }
        else{
            cout<<"Singly linked list values";
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
    node n6(6,60);
    singlylinkedlist l1;
    l1.appendnode(&n1);
    l1.appendnode(&n2);
    l1.prependnode(&n3);
    l1.insertnode(1,&n4);
    l1.insertnode(3,&n6);
    l1.appendnode(&n5);
    l1.deletenode(4);
    l1.updatekey(5,60);
    l1.printlist();
}
