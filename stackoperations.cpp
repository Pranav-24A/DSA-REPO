#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class stack{
    private:
       int top;//top just holds a the index value of the top element in the stack
       int arr[5];
    public:
        stack(){
        top=-1;
        for(int i=0;i<5;i++){
        arr[i]=0;
        }
    }
    bool isempty(){
        if(top==-1)
          return true;
        else 
           return false;
    }
    bool isfull(){
        if(top==4)
         return true;
        else
        return false;
     }
    int push(int value){
        if(isfull()){
            cout<<"Stack Overflow \n";
            return 0;
        }
        else{
            top ++;
            arr[top]=value;
            return 0;
        }

    }
    int pop(){
        if(isempty()){
            cout<<"Stack Underflow\n";
            return 0;
        }
        else{
            int popvalue=arr[top];
            arr[top]=0;
            top--;
            return popvalue;
        }
    }
    int count(){
        return top+1;
    }

    int peek(int i){
        if(isempty()){
            cout<<"stack underflow \n";
            return 0;
        }
        else{
            return arr[i];
        }
    }
    void change(int position,int value){
        arr[position]=value;
    }
    void display(){
        for(int i=4;i>=0;i--){
            cout<<arr[i]<<"\n";
        }
    }
};
int main(){
    stack s1;// Here s1 is the object of the stack class
     s1.push(1)<<'\n';
     s1.push(2)<<'\n';
     s1.push(3)<<'\n';
     s1.push(4)<<'\n';
     s1.push(5)<<'\n';
     cout<<s1.count()<<"\n";
     cout<<s1.peek(3)<<'\n';
     s1.change(4,6); 
     std::cout << "\f"; // Clear the console screen (works on most systems)  
}