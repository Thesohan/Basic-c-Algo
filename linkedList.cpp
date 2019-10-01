#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x) : val(x),next(NULL) {}
};

int main(){
	vector<int> v(26,1);
	cout<<v[23];
	memset(v.begin(),0,sizeof(v));
	cout<<v[23];
	ListNode *head;
	ListNode n(20);
	head=&n;
	cout<<head->val;
	ListNode m(30);
	n.next=&m;
	ListNode k(40);
	m.next=&k;
	// head.next=n;
	while(head!=NULL){
		cout<<head->val<<" ";
		head=head->next;
	}
	// head=ListNode(10);
	// cout<<(head.val);

}