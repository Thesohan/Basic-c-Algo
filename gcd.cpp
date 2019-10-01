#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int m=min(a,b);
	int n=max(a,b);
	if(n%m!=0)
		gcd(m,n%m);
	else
		return m;
}
int main(){
int a,b;
cin>>a>>b;
cout<<gcd(a,b);
}