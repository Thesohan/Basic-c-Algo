// smallest composite no. 4
#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		if(n==2||n==3||n==5||n==11)
			cout<<-1<<"\n";
		else if(n%4==0)
			cout<<n/4<<"\n";
		else if(n%4==1)
			cout<<(n-9)/4+1<<"\n";

		else if(n%4==2)
			cout<<(n-6)/4+1<<"\n";
		else if(n%4==3)
			cout<<(n-15)/4+1<<"\n";

	}

}