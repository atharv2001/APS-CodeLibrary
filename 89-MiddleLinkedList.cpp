#include<bits/stdc++.h>
using namespace std;

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *ans=head;
        int count=1,i;
        while(ans!=NULL)
        {
            ans=ans->next;
            count++;
        }
        ans=head;
        for(i=1;i<(count/2+1);i++){
            ans=ans->next;
        }
        return ans;
    }
};