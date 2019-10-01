#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int max_dif=INT_MIN;
	int currentMin=v[0];
	for(int i=0;i<n;i++){
		if(max_dif<v[i]-currentMin){
			max_dif=v[i]-currentMin;
		}

		if(currentMin>v[i]){
			currentMin=v[i];
		}
	}
	cout<<max_dif;
}