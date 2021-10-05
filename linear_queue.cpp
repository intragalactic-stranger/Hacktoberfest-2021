//C++ Program to Implement Queue using Array
//A queue is an abstract data structure that contains a collection of elements. 
//Queue implements the FIFO mechanism i.e. the element that is inserted first is also deleted first.
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {                                     //the function Insert() inserts an element into the queue
   int val;
   if (rear == n - 1)                               //If the rear is equal to n-1, then the queue is full and overflow is displayed.
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)                             //If front is -1, it is incremented by 1. Then rear is incremented by 1 and the element is inserted in index of rear.
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {                                     //the function Delete() deletes an element from the queue
   if (front == - 1 || front > rear) {              //if there are no elements in the queue then it is underflow condition.
      cout<<"Queue Underflow ";
      return ;
   } else {                                         //if there is even one element in the queue then the element at front is displayed and front is incremented by one.
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {                                    //the function Display() prints all the elements from the queue 
   if (front == - 1)                                //In the function display(), if front is -1 then queue is empty.
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";                //all the queue elements are displayed using a for loop.
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {                                        //The function main() provides a choice to the user if they want to insert, delete or display the queue.
   int ch;                                          
   cout<<"1) Insert element to queue"<<endl;        
   cout<<"2) Delete element from queue"<<endl;      
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;           //According to the user response, the appropriate function is called using switch.
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;     // If the user enters an invalid response, then that is printed.
      }
   } while(ch!=4);
   return 0;
}
