#include <iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
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
    cout<<"Array before selection sort \n";
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    selectionsort(arr,size);
    cout<<"\n";
        cout<<"Array after selction sort \n";
            for(int m=0;m<size;m++){
        cout<<arr[m]<<" ";
    }   
}