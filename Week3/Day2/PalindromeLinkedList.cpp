class Solution {
public:
    ListNode* head2=nullptr;
    void reverse(ListNode* prev,ListNode* current)
    {
        if(current!=nullptr)
        {
            ListNode* temp=current->next;
            current->next=prev;
            reverse(current,temp);
        }
        else
        {
            head2=prev;
        }
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode* fast=head,*slow=head;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        reverse(nullptr,slow);
        while(head!=nullptr&&head2!=nullptr)
        {
            if(head->val!=head2->val) return false;
            head=head->next;
            head2=head2->next;
        }
        return true;
    }
};