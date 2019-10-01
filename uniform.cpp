#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s="";
		int i=0;
		while(n--){
			s+=97+i;
			i++;
			if(i==k)
				i=0;
		}
		cout<<s<<"\n";
	}
}