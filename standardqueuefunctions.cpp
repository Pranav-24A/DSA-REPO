#include <iostream>
using namespace std;
class queue{
    private:
    int front;
    int rear;
    int arr[4];
    public:
    queue(){
        front=-1;
        rear=-1;
        for(int i=0;i<4;i++){
        arr[i]=0;
    }
    }
    bool isempty(){
        if(rear==-1 && front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(rear==3){
            cout<<"Queue overflow \n";
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int value){
        if(isfull()){
            return;
        }
        else if(isempty()){
            rear=front=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
    }
    int dequeue(){
        int x;
        if(isempty()){
            return 0;
        }
        else if(rear==front){
            x=arr[front];
            rear=front=-1;
            return x;
        }
        else{
            x=arr[front];
            front ++;
            return x;
        }
    }
    void display(){
    for (int j = 0; j < 4; j++) {
        cout << arr[j] << "\n";
    }
    }
    int count(){
        return rear-front+1;
    }
};
int main(){
    queue q1;

}