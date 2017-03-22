/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    
   ListNode* slow=A; ListNode* fast=A;
   bool cycle=false;
	while(slow!=NULL && fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
		cycle=true;
		break;
		}
		
	}
	if(cycle==false ) return NULL;
	slow=A;
	while(slow!=fast){
		slow=slow->next;
		fast=fast->next;
	}
	return slow;

}
