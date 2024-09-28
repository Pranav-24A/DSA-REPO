#include <iostream>
using namespace std;
void bubblesort(int arr[],int size1){ 
    int rounds=0;
  
    for(int i=0;i<size1;i++){
        rounds++;
          int flag=false;
        for(int j=0;j<size1-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=true;
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        } 
        if(flag==false){
            break;
        }
    }
    cout<<"No of rounds taken to sort :"<<rounds<<"\n";
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
    cout<<"Array before bubble sort \n";
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    bubblesort(arr,size);
    cout<<"\n";
        cout<<"Array after bubble sort \n";
         for(int m=0;m<size;m++){
            cout<<arr[m]<<" ";
    }   
}