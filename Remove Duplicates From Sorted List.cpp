/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
      ListNode *cur;
			ListNode  *nextofnext;
			cur=head;
			if(head==NULL) return NULL;
			while(cur->next!=NULL){
				if(cur->val==cur->next->val){
					nextofnext=cur->next->next;
					free(cur->next);// it earlier store memory address of cur ke aageke ke node ka so free it and now it will store nectofnet think think think
					cur->next=nextofnext;
				}
				else
				cur=cur->next;
			}
			return head;
		}

