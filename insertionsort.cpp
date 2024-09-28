#include <iostream>
using namespace std;
void insertionsort(int arr[],int s){
    int key;
    int n=s;
    int j=0;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1 ;
        }
        arr[j+1]=key;  
    }
}
int main(){
        int size;
    cout<<"Enter the size of the array \n";
    cin>>size;
    int arr[size];
    for(int k=0;k<size;k++){
        int ele;
        cout<<"Enter element at an random order: \n";
        cin>>ele;
        arr[k]=ele;
    }
    cout<<"Array before insertion sort \n";
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    insertionsort(arr,size);
    cout<<"\n";
        cout<<"Array after insertion sort \n";
         for(int m=0;m<size;m++){
            cout<<arr[m]<<" ";
    }   
}