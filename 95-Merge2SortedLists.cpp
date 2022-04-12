

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* cur=dummy;
    while(list1!=NULL && list2!=NULL){
        if(list1->val<=list2->val){
            cur->next=list1;
            list1=list1->next;
            cur=cur->next;
        }else{
            cur->next=list2;
            list2=list2->next;
            cur=cur->next;
        }
    }
    if(list1!=NULL){
        cur->next=list1;
    }
    if(list2!=NULL){
        cur->next=list2;
    }
    return dummy->next;
}
