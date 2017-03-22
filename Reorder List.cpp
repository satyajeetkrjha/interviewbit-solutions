/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head2){
ListNode* cur=head2;// cur points to head at beginning 
 ListNode* prev=NULL;
   ListNode* next;// this will store the next 
	while(cur!=NULL){
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
		
	}
	head2=prev;
return head2;

}
ListNode* merge(ListNode* l1,ListNode*  l2){
	if(l1==NULL) return l2;
	if(l2==NULL) return l1;
ListNode  *headno=l1;// head is point to list 1 's head
//	cout <<" l1->data is "<<l1->data<<endl;
l1=l1->next;
	//	cout <<" l1->data now  is "<<l1->data<<endl;
ListNode *cur=headno;
	bool flag=true;
	while(l1!=NULL && l2!=NULL) {
		if(flag==false){
			cur->next=l1;
		   l1=l1->next;
		}
		else{
			cur->next=l2;
			l2=l2->next;
		}
		cur=cur->next;
		flag=!flag;
	}
// if(l1==NULL ) cout<<"l1 is null "<<endl;
 //if(l2==NULL) cout<<"L2 IS NULL "<<endl;
	if(l1!=NULL){
		cur->next=l1;
	}
	else{
		cur->next=l2;
	}
	
	return headno;
}
ListNode* Solution::reorderList(ListNode* A) {
    if(A==NULL || A->next==NULL) 
    return A;
   ListNode *slow=A;
ListNode* fast=A;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		
	}
//	cout<<"middle is "<<slow->val<<endl;
	// for 1 2 3 4 
	// we want one part to be 1 2 and other part to be 3 4
 ListNode  *head1=A;
  ListNode *head2=slow->next;
   slow->next=NULL;
   ListNode* secondhalf= reverse(head2);
  ListNode *solution=merge(head1,secondhalf);
  return solution;
    
}
