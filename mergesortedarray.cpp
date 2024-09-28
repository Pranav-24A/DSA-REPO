#include <iostream>
using namespace std;
void mergesortedarray(int arr[],int mid,int left,int right,int size){
    int temp[size];
    int i=left;
    int j=mid+1;
    int k=left;
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int z=left;z<=right;z++){
        arr[z]=temp[z];
    }
}
void splitarray(int arr[],int left,int right,int size){
    if(left<right){
    int mid=(left+right)/2;
    splitarray(arr,left,mid,size);
    splitarray(arr,mid+1,right,size);
    mergesortedarray(arr,mid,left,right,size);
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
    cout<<"Array before merge sort \n";
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    int l=0;
    int r=size-1;
    splitarray(arr,l,r,size);
    cout<<"\n";
        cout<<"Array after mergesort \n";
            for(int m=0;m<size;m++){
        cout<<arr[m]<<" ";
    }  
}