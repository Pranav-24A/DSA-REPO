#include <iostream>
using namespace std;
class queue{
    private:
    int arr[4];
    int front;
    int rear;
    public:
    queue(){
        front=-1;
        rear=-1;
        for(int i=0;i<4;i++){
            arr[i]=0;
        }
    }
    bool isempty(){
        if(rear==-1 && front ==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){ // to get a perfect isfull() function we have to check if front=0 and rear=size(arr)
        if(front==(rear+1)%4){
            cout<<"Queue is full \n";
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int element){
        if(isfull()){
            return;
        }
        else if(isempty()){
            front=rear=0;
            arr[rear]=element;

        }
        else{
            rear ++;
            rear=rear%4;
            arr[rear]=element;
        }
    }
int dequeue(){
    int x=0;
    if(isempty()){
        return 0;
    }
    else if(rear==front){
        x=arr[front];
        arr[front]=0;
        front=-1;
        rear=-1;
        return x;
}
    else{
        x=arr[front];
        arr[front]=0;
        front=(front+1)%4;
        return x;        
    }
}
void display(){
    for (int j = 0; j < 4; j++) {
        cout << arr[j] << "\n";
    }
}
};
int main(){
    queue q1;
    q1.enqueue(5);
    q1.enqueue(5);
    q1.enqueue(5);
    q1.enqueue(5);
    q1.display();    
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display(); 
    q1.enqueue(5);
    q1.display();
    q1.dequeue();
    q1.display();

}