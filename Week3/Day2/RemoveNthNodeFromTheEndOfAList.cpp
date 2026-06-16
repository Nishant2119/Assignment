class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* fast = head,* slow = head;
        for (int i =0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast == nullptr )
        {
            ListNode* temp = head;
            temp = head ->next;
            delete head;
            return temp;
        }
        while(fast != nullptr && fast -> next != nullptr)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        ListNode* temp = slow->next;
        if (slow->next!=nullptr)slow ->next = slow ->next ->next;
        delete temp;
        return head;
    }
};