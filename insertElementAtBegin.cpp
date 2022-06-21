// Inserting element at the Begining of the Node  

//output : 78->67->55->34->10

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
 
 void insertAtBegin(Node* &head, int val) {
     
     Node* second = new Node(val);
     
     second->next = head;
     head = second;
     
 } 
 
//printing the element
 void print(Node* head) {
      while(head != NULL) {
        cout<<head->val<<"->";
        head = head->next;
    }
 }


int main() {
    
    Node* first = new Node(10);
    Node* head = first;
   
   int arr[] = {34,55,67,78};
   for(int i=0; i<4; i++){
        insertAtBegin(head,arr[i]);
   }
    print(head);
    
    return 0;
}
