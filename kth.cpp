#include<bits/stdc++.h>
using namespace std;

int complement(int a){
	int no_of_bits = floor(log2(a))+1;

	return (((1<<no_of_bits)-1)^a);
}

int countSetBit(int a){
	int count=0;
	while(a!=0){

		// cout<<(a&1)<<"\n";
		count+=a&1;
		a=a>>1;
	}
	return count;
}
string isPowerOf2(int a){
	if(a==0){
		return "no";
	}
	if((a&(a-1))==0){
		return "yes";
	}
	return "no";
}

string isPowerOf4(int a){
	//set bit should be in odd position

if(a==0){
	return "no";
}
while(a!=0){
	if(a==1){
		return "yes";
	}
	if((a&1)!=0){
		return "no";
	}
	a=a>>2;
}
return "No";
}
// 	int index=1,c=0;
// 	while(a!=0){
// 		if((a&1)!=0){
// 			c++;
// 			if(index%2==0){
// 				return "no";
// 			}
// 		}
// 		a=a>>1;
// 		index++;

// 	}
// 	if(c==1)
// 	return "yes";
// else return "No";

// }

int main(){

// cout<<log2(16);
for(int a=0;a<100;a++)
	cout<<isPowerOf4(a)<<" "<<a<<"\n";

// int b =1<<k-1;
// cout<<(a^b);
	// cout<<a<<"->"<<complement(a)<<"\n";


	// cin>>a;
	// cin>>k;
	// int b=1<<k-1;
	// cout<<b;
	// int c=a|b;

	// 	cout<<c;
	// if(c>0){
	// 	cout<<"yes";
	// }
	// else 
	// 	cout<<"no";
}