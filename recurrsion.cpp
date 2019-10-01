#include<bits/stdc++.h>
using namespace std;

void printReverse(string s,int len){

	if(s.size()==0){
		return;
	}
	printReverse(s.substr(len+1,s.size()-len-1),len+1);
	cout<<s[0];
}
int main(){
	string s;
	cin>>s;
	printReverse(s,0);
}
