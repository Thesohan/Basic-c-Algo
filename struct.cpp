#include<bits/stdc++.h>
using namespace std;

struct foo{
	int bar;
	foo(): bar(3){}
	int getBar(){
		return bar;
	}
};
foo f;
int y=f.getBar();

int main(){
cout<<y;
}