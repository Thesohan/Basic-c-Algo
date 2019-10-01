#include<bits/stdc++.h>
using namespace std;


float sumOfAP(float n){
	return (n/2)*(16+(n-1)*8);
}

float nthTerm(float n){
	return 8+(n-1)*8;
}

float calUnit(float a, float b){
	b/=12;
	float unit;
	if(a<5){
		unit=a*10+b*10;
		return unit;
	}
	else{
		unit=sumOfAP((a-5));
		unit=nthTerm(a-5)+b*8+50+unit;
		return unit;
	}
}

int main(){
	int limit[3];
	cin>>limit[0]>>limit[1]>>limit[2];
	int n;
	cin>>n;
	while(n--){
		string name;
		int age;
		float height[2];
		cin>>name>>age>>height[0]>>height[1];
		string wOrb;
		if(age<18)
			wOrb="Water";
		else
			wOrb="Beer";

		float unit=calUnit(height[0],height[1]);
		string size;
		if(unit<=limit[0]){	
			size="ExtraSmall";
		}
		else if(unit>limit[0] and unit<=limit[1]){
			size="Small";
		}
		else if(unit>limit[1] and unit<=limit[2]){
			size="Medium";
		}
		else if(unit>limit[2]){
			size="Large";
		}

		cout<<name<<" "<<wOrb<<" "<<size<<" "<<age<<" "<<height[0]<<" "<<height[1]<<endl;
	}
}