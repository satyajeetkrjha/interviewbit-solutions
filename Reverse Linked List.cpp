/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::reverseList(ListNode* head) {
    
		    ListNode *cur;
		    ListNode *prev; ListNode *next;
			prev=NULL;
			cur=head;
			while(cur!=NULL){
				next=cur->next;
				cur->next=prev;
				prev=cur;
				cur=next;
			}
			head=prev;
			return head;
}
