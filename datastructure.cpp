//to put in simple words data structure is the way in which data is stored in the computer
//while we are telling a way it refers to the rules and regulation which we have to follow in 
//order to create and manage the datastructure

//defenition of data structure
// In computer a data structure is a format of data management,storage which can be efficiently accessed for data modification


//why do we need data structures...?
/*Data structures eases the process of search in databases
Diffrent data structures can be allocated for diffrent problems
i.e:We are gthe ones decidind the stucture of the data
It also enables efficient access to the data
*/

//Array is also an example of data strucures
//Defenition of an array:
//   array is a data type in which the values of same data type are stored in contiguous memory location
//   contiguous means they follow a common pattern
//    memory alllocation is contiguous in array not continuous

#include <iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};//388430297856,388430297860,388430297864,388430297868,388430297872 these are the memory addresses
    // values inside the array arrange according to their index as you can see they are contiguous
    for(int i=0;i<size(arr1);i++){
        cout<<&arr1[i]<<'\n';
    }
}