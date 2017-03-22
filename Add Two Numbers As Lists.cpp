/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
   	ListNode*prev=NULL;
	ListNode *temp;
	ListNode *res=NULL;
	int carry=0;
	 ListNode *a=A;
	 ListNode *b=B;
	int sum=0;
	while(a!=NULL || b!=NULL){
		sum=carry;
		if(a==NULL);
		else
		sum+=a->val;
		if(b==NULL);
		else
		sum+=b->val;
		  if(sum>=10)
		  carry=1;
		  else
		  carry=0;
		  sum=sum%10;
		 temp=new ListNode (sum);
		  if(res==NULL){
		  	res=temp;
		  }
		  else
		  prev->next=temp;
		  prev=temp;
		  if(a!=NULL)
		  a=a->next;
		  if(b!=NULL)
		  b=b->next;
		  
	}
	if(carry>0)

	temp->next=new ListNode (carry);
	return res;
}
