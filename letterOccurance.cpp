#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<int>v(26,0);
	// vector<int>visited(26,0);
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		v[s[i]-'a']++;
	}
	for(int i=0;i<s.size();i++){
		if(v[s[i]-'a']!=0){
			cout<<s[i]<<v[s[i]-'a'];
			v[s[i]-'a']=0;
		}
	}

}