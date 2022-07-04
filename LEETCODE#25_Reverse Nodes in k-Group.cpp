//ITERATION APPROACH


//time_complexity O(N)  -> coz we are traversing each node in the linked list
//space_complexity O(1) -> not pused any extra space


class Solution {
public:
     
     ListNode* reverse(ListNode* start, ListNode* end){
         ListNode* prev = NULL, *curr = start,*temp = start;
         
         
         while(prev != end) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp; 
         }
         
         return prev;
     }
    
     ListNode* reverseKGroup(ListNode* head, int k) {
         
        if(head==NULL || head->next == NULL || k==1) return head;
         
        ListNode *dummy = new ListNode(-1);
        dummy->next = head; 
        ListNode* beforeStart = dummy , *end = head;
        
        //ya to mera size reach krega ya to nai
        int i=0;
        while(end != NULL) {
            i++;
            if(i%k==0){
               //iska matlb ki k window bn chuka hai or reverse krna baki hai
             
               ListNode* start = beforeStart->next, *temp = end->next;
               reverse(start,end);
               
               //connection building
                beforeStart->next = end;
                start->next = temp;
               
                // moving for next k window
                beforeStart = start;
                end = temp;
                
            }
            else{
                end = end->next;
            }
        }
        
      return dummy->next;  
    }
};
