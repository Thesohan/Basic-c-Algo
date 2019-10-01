#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node NODE;

NODE *insert(int x,NODE * node){
	node=(NODE*)malloc(sizeof(node));
	node->data=x;
	node->left=node->right=NULL;
	return node;
}
int main(){

	int n,x;
	NODE *node=NULL;
	cout<<"enter no. of nodes in a tree\n";
	cin>>n;
	cout<<"enter "<<n<<" values of each node\n";
	for(int i=0;i<n;i++){
		cin>>x;
		if(*node==NULL)
		node=insert(x,node);
	else{
		if(node->data<x){
			node->left=insert(x,node);
		}
		else{
			node->right=insert(x,node);
		}
	}
	}
}
