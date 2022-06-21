//Inserting the element at the End----- 

//Output: 10->34->55->67->78

#include <iostream>
#include<algorithm>
using namespace std;

class Node{
    public : int val;
             Node *next;
             
   //Constructor
    Node(int val){
    this->val = val;
    this->next = NULL;
   }
};
 
 void insertAtBegin(Node* &tail, int val) {
     
     Node* second = new Node(val);
     tail->next = second;
     tail = second;
    
 } 
 
 void print(Node* head) {
      while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
 }


int main() {
    
    Node* first = new Node(10);
    Node* head = first;
    Node* tail = first;
   
   int arr[] = {34,55,67,78};
   for(int i=0; i<4; i++){
        insertAtBegin(tail,arr[i]);
   }
   print(head);
     
    return 0;
}
