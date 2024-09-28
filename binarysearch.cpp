#include <iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int x){
    while(left<=right){
        int center=left+(right-left)/2;
        if(arr[center]==x){
            return center;
        }
        else if(arr[center]<x){
            left=center+1;
        }
        else{
            right=center-1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array \n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        int ele;
        cout<<"Enter element: "<<i+1 <<'\n';
        cin>>ele;
        arr[i]=ele;
    }
    int e;
    cout<<"Enter the element you want to search \n";
    cin>>e;
    int temp=binarysearch(arr,0,size,e);
    if(temp==-1){
        cout<<"Element not found \n";
    }
    else{
      cout<<"Element found at position"<< temp<<'\n';  
    }
}