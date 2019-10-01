#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n,0);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());

	// for(int i=0;i<n;i++){
	// 	cout<<v[i];
	// }

	queue<int>q0,q1,q2;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
		if(v[i]%3==0){
			q0.push(v[i]);
		}
		else if(v[i]%3==1){
			q1.push(v[i]);
		}
		else if(v[i]%3==2){
			q2.push(v[i]);
		}
	}
	if(sum%3==1){
		if(!q1.empty()){
			q1.pop();
		}
		else{
			if(!q2.empty()){
				q2.pop();
				if(!q2.empty()){
					q2.pop();
				}
				else{
					return 0;
				}
			}
		}
	}
	else if(sum%3==2){
		if(!q2.empty()){
			q2.pop();
		}
		else{
			if(!q1.empty()){
				q1.pop();
				if(!q1.empty()){
					q1.empty();
				}
			}
		}
	}
	v.clear();
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
	cout<<"\n\n\n\n";
	while(!q0.empty()){
		v.push_back(q0.front());
		q0.pop();
	}
while(!q1.empty()){
		v.push_back(q1.front());
		q1.pop();
	}while(!q2.empty()){
		v.push_back(q2.front());
		q2.pop();
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++)
		cout<<v[i];
}