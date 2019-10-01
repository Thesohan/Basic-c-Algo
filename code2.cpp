#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,w;
	cin>>k>>n>>w;
	int t=k*w*(w+1)/2;
	if(t-n<=0)
		cout<<0;
	else
		cout<<t-n;
}