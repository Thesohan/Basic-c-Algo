#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int strlen,wrong;
		cin>>strlen>>wrong;
		string s;
		cin>>s;
		vector<int>v(wrong,0);
		vector<int>c(26,0);
		for(int i=0;i<wrong;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		vector<int>v(100000,0);
		for(int i=0;i<10000;i)
		if(v[wrong-1]!=strlen){
		for(int j=0;j<strlen;j++){
				c[s[j]-'a']++;
			}			
		}
		for(int i =0;i<26;i++){
			cout<<c[i]<<" ";
		}
		cout<<"\n";

	}
}