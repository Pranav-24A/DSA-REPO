#include <iostream>
using namespace std;
void linearsearch(int arr[],int element,int size){
    int temp=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
        cout<<"Element found at position : "<<i<<'\n';
        temp=0;
        break;
        }
    }
    if(temp==-1){
        cout<<"Element not found \n";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array \n";
    cin>>size;
    int arr[size];
    int x;
    cout<<"Enter the element you want to seach \n";
    cin>>x;
    for(int i=0;i<size;i++){
        int ele;
        cout<<"Enter element: "<<i+1 <<'\n';
        cin>>ele;
        arr[i]=ele;
    }
    linearsearch(arr,x,size);
}