class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* result= new ListNode(0);
        ListNode* tail=result;
        ListNode* temp1=list1,* temp2=list2;
        while(temp1!=nullptr&&temp2!=nullptr)
        {
            if(temp1->val>=temp2->val)
            {
                tail->next=temp2;
                tail=tail->next;
                temp2=temp2->next;
                tail->next=nullptr;
            }
            else
            {
                tail->next=temp1;
                tail=tail->next;
                temp1=temp1->next;
                tail->next=nullptr;
            }
        }
        if(temp1==nullptr)
        {
            tail->next=temp2;
        }
        else if(temp2==nullptr)
        {
            tail->next=temp1;
        }
        return result->next;

    }
};