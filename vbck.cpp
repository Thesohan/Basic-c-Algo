#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v(10,0);
	for(int i=0;i<2;i++){
		cin>>v[i];
		// if(i%2==0)v.pop_back();
	
	}

	v.pop_back();
	for(auto i:v){
		cout<<i<<" ";
	}

}