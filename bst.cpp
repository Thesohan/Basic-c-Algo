#include<bits/stdc++.h>
using namespace std;
struct node{
	int key,count;
	struct node *left,*right;
};

typedef struct node NODE;
NODE* getNode(int key){

	NODE *temp= (NODE*)malloc(sizeof(NODE));
	temp->key=key;
	temp->count=1;
	return temp;
}
NODE* insert(NODE *root,int key){

	if(root==NULL) return getNode(key);
	
	if(root->key<key){
			root->right=insert(root->right,key);
		}
	if(root->key>key){
			root->left=insert(root->left,key);
		}
	if(root->key==key){
			root->count=root->count+1;
			return root;
		}
	return root;
}
NODE *getInorderS(NODE *root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;

}
void display1(NODE *root){
	// cout<<root->key;
	if(root!=NULL){
		cout<<root->key<<" "<<root->count<<"\n";
	
		display1(root->left);
		display1(root->right);
	
	}
}
void delete1(NODE *root,int key){
	if(root==NULL) return;
	if(root->key>key){
		delete1(root->left,key);
	}
	else if(root->key<key){
		delete1(root->right,key);
	}
	else{
	if(root->left==NULL && root->right==NULL){
		free(root);
	}
	else if(root->left==NULL && root->right!=NULL){
		NODE *temp=root;
		root=root->right;
		free(temp);
	}
	else if(root->left!=NULL && root->right==NULL){
		NODE *temp = root;
		root=root->left;
		free(temp);
	}
	else if(root->left!=NULL && root->right!=NULL){
		NODE *succ  = getInorderS(root->right);
		NODE *temp=root;
		root->key=succ->key;
		free(succ);
	}
}
}
int main(){

	NODE *root;

 root = insert(root, 50); 
    insert(root, 30);

    insert(root, 60); 
    insert(root, 80); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70);
display1(root);
delete1(root,20);
	cout<<"haa\n\n";

display1(root);

}