#include<bits/stdc++.h>
using namespace std;

float w[50],c[10],p[10];

//bool setNotContain(float sets[],float k){
	
//	for(int i=1;i<sets.length();i++){
//		if(sets[i]==k)
//		 return false;
//	}
	
//	return true;
//}
float processorTimeDemand(float t,int i){
	

cout<<"values of t=="<<t<<"\n";

	float ptd=0;
	for(int j=1;j<=i;j++){
	
		ptd+=c[j]*(ceil(t/p[j]));
	}	

	float level=ptd/t;

//cout<<"level"<<level<<"\n";
	return level;

}
int main()
{
	int i,n,j,k,setIndex=1;
	float sets[50];
	cout<<"Enter the no of tasks:\t";
	cout<<flush;
	cin>>n;

	float finalLevel[n];
	
	cout<<flush;
	cout<<"Enter time-period , execution time (in the order for "<<n<<" tasks)\n";
	cout<<flush;
	for(i=1;i<=n;i++)
	{
		cin>>p[i]>>c[i];
		
		cout<<flush;	
	}

//i=Priority level

 	for(i=1;i<=n;i++){
	
	if(i==1){

	finalLevel[i]=c[i]/p[i];
  	cout<<"i = 1 value of l = "<<finalLevel[i]<<"\n";		
	}
	else{

	float level=10000;	
	for(int j=1;j<=i;j++){
		
		int maxK=floor(p[i]/p[j]);
		

  		for(int k=1;k<=maxK;k++){
		
		//if(setsNotContain(sets,k*p[j])
		//	sets[setIndex++]=k*p[j];
		
		//}
			cout<<"value ="<<p[j]<<"\n";
			level=min(level,processorTimeDemand(k*p[j],i));
			cout<<"level values i,j,k= "<<i<<" ,"<<j<<", "<<k<<" ,"<<level<<"\n";
		
		}	
	}

	finalLevel[i]=level;

		
	}


	}
float ans=0;
for(int i=1;i<=n;i++){
ans=max(ans,finalLevel[i]);

}
if(ans<=1){
	cout<<"This task set is schedulable and total utilization is ="<<ans;
}
else{
cout<<"this task set isn't schedulable since total utilization is = "<<ans;
}
}