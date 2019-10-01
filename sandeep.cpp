#include<iostream>
using namespace std;
int main(){
	int a,b;
	char ch;
	// for(initialisation;condition;increment)
	cout<<"please enter your choice (+,-,*,%,/)"<<endl;
	cin>>ch;

	cout<<"please enter two no.\n";
	cin>>a>>b;
// A=10;
// 10=a;
// int 10;
// 
	// if(ch=='*'){
	// 	cout<<a*b;
	// }
	// else if(ch=='+'){
	// 	cout<<a+b;
	// }
	// else if(ch=='-'){
	// 	cout<<a-b;
	// }
	// else if(ch=='/'){
	// 	cout<<a/b;
	// }
	// else if(ch=='%'){
	// 	cout<<a%b;
	// }
	// else {
	// 	cout<<"error";
	// }
	switch(ch){
		case '+':{
			cout<<a+b;
			break;
		}
		case '-':{
			cout<<a-b;
			break;
		}
		case '*':{
			cout<<a*b;
			break;
		}
		case '%':{
			cout<<a%b;
			break;
		}
		case '/':{
			cout<<a/b;
			break;
		}
		default:
		cout<<"error";
	}
return 0;
}