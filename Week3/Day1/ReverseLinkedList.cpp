class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
          if(head==nullptr)
        {
            return nullptr;
        }
        else if(head->next==nullptr) 
        {
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* current=head;
        ListNode* forward=head->next;
       while(current!=nullptr)
       {
            current->next=prev;
            prev=current;
            current=forward;
            forward=forward!=nullptr?forward->next:nullptr;
       }
       return prev;
    }
};