#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod,char to_rod,char aux_rod){
  if(n==1){
    cout<<"Move disk 1 form rod"<<from_rod<<"to rod"<<to_rod<<endl;
    return ;
  }

  towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
  cout<<"Move disk"<<n<<"from rod"<<from_rod<<"to rod"<<to_rod<<endl;

  towerOfHanoi(n-1,aux_rod,to_rod,from_rod);


}

int main(){
  int n;
  cin>>n;
  towerOfHanoi(n,'A','B','C');//A,B,C is the name of rods;
}
