#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k,x;
	cin>>n;
	while(n--){
		cin>>k>>x;
		cout<<x+(k-1)*9<<"\n";
	}
}