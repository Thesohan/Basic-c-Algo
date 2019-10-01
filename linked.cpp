#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};
typedef struct  node NODE;
NODE *head;

NODE* createNode(){
return (NODE*)malloc(sizeof(NODE*));
}
void beginsert (int item){
	NODE *temp=(NODE*)malloc(sizeof(NODE*));
	if(temp!=NULL){
	temp->next=head;
	temp->data=item;
	head=temp;
	cout<<"node inserted\n";
	}
	else{
		cout<<"overflow \n";
	}

}   
void lastinsert (int item){

	NODE *temp=createNode();
	if(temp!=NULL){
		if(head==NULL){
			head=temp;	
		}
		NODE *ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->data=item;
		temp->next=NULL;
		cout<<"node inserted at the end\n";
	}
	else{
		cout<<"overflow\n";
	}
}
void randominsert();  
void random_delete(int item){
	NODE *ptr=head;
	if(ptr->next==NULL){
		free(ptr);
		cout<<"item deleted\n";
		return;
	}

	NODE *lastPtr=ptr;
	
	while(ptr->data!=item and ptr->next!=NULL){
		lastPtr=ptr;
		ptr=ptr->next;
	}
	if(ptr->next==NULL){
		cout<<"no item found\n";
		return;
	}
	else{
		lastPtr->next=ptr->next;
		free(ptr);
		return;
	}
}

void last_delete();  
void display(){
	NODE *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}  
void search(); 
int main(){
	cout<<"choose ";
	while(true){
cout<<"\n\n";
	cout<<"1 beginsert\n 2 lastinsert\n7 display";
	int choice;
	cin>>choice;
	switch(choice){
		int item;
		case 1:
			cin>>item;
			beginsert(item);
			break;
		case 2:
			cin>>item;
			lastinsert(item);
			cout<<head->data;
			break;
		case 3:break;
		case 4: break;
		case 5: 
		cin>>item;
			random_delete(item);
			break;
		case 6: break;
			case 7:
				display();
				break;
	}
}
}