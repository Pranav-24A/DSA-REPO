//1st lets understand how queue works
  /* queue works on fifo or lilo 
  in queue both addition and removal of elements takes place at different ends 
  Addition of elements takes place at the rear end and removal of elements takes place at the front end 
  both rear and front are set to -1
  queue is a linear abstract data structure

  ----------------------------------------------------------------------------------------------------------------------------------
  standard queue operations:
  isempty()
  isfull()
  enqueue()
  dequeue()
  count()
  display()
  */


 //there is a big disadvantage in using queue this way 
 //when the queue gets fulled and we the dequeue all theb elements the spaces in the leftg cannot be accesed again
 //for ex:
 //if there is a queue of size 4
 //{1,2,3,4} lets assume this is the queue of size 4
// if we dequeue all the elements in the queue
// then both rear and front will have a value of 3,which is the index of the last element 
//Making it impossible to access the spaces at the indexes of 0,1,2
 //This is the big problem with using the queue this way
 //and while both front and rear are = 3,even though the boxes at the left side are free
 //The is full() function will return true since rear=(size(array) which is 4 )-1
// this problem can be solved by udsing circular queue
int main(){

}
