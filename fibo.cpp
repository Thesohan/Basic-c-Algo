#include<bits/stdc++.h>
using namespace std;

vector<int>v(100000,0);
int fibo(int x){
	if(v[x]!=0){
		return v[x];
	}
	if(x==0){
		return 0;
	}
	if(x==1){
		return 1;
	}
	else{
		int f=fibo(x-1)+fibo(x-2);
		v[x]=f;
		return f;
	}
}

int main(){
	int n;
	int f=0,s=1;
cin>>n;
cout<<fibo(n);
}