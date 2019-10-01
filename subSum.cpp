#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
int sum;
cin>>sum;
int r=0,cursum=0;
	for(int i=0;i<n;i++){
	 
	 while(cursum>sum && r<n){
			cursum-=v[r];
			r++;
		}
	  if(cursum==sum){
			cout<<v[r]<<" "<<v[i-1];
			return 0;
		}
		cursum+=v[i];
	}
	cout<<"nOT foUND";
}