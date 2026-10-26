class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if (!list1) return list2;
        // if (!list2) return list1;

        // if (list1->val <= list2->val) {
        //     list1->next = mergeTwoLists(list1->next, list2);
        //     return list1;
        // } else {
        //     list2->next = mergeTwoLists(list1, list2->next);
        //     return list2;
        // }
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val< list2->val){
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }else{
                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
            }
        }
        if(list1!=nullptr){
            temp->next=list1;
            temp=temp->next;
        }else{
            temp->next=list2;
            temp=temp->next;
        }
        return dummy->next;
    }
};