#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int x=n-(a+b-c);
	a=a-c;
	b=b-c;
	if(x>0 and a>=0 and b>=0 and c>=0){
		cout<<x;
	}
	else{
		cout<<-1;
	}
}