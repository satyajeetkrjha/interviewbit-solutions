/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   int l=0;// this holds the length of luinkedlist 
   int n=B;
ListNode *cur=A;
	while(cur!=NULL){
		cur=cur->next;
		l++;
	}
	//cout<<"l is "<<l<<endl;
	if(n>=l) {
	A=A->next;
	return A;

}
	int tomove=l-n-1;
	//cout<<"tomove is "<<tomove<<endl;
	cur=A;
	//cout<<"cur->data is "<<cur->data<<endl;
	while(tomove>0){
	cur=cur->next;
	tomove--;	
	}
	cur->next=cur->next->next;
return A;
}
