#include<bits/stdc++.h>
using namespace std;

class Student{
	public:
		int id;
		string name;

		Student(){

		}
		Student(int id,string name){
			this->id=id;
			this->name=name;
		}
		~Student(){

			cout<<"default destructor"<<endl;
		}
		// ~Student(int id,string name){
		// 	this->id=id;
		// 	this->name=name;
		// 	cout<<"default destructor"<<endl;
		// }
		
		void display(){
			cout<<"id->"<<id<<endl;
			cout<<"name->"<<name<<endl;
		}
};


int main(){

	Student s1;
	s1.id = 201;
	s1.name="sohan";
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;

	Student s2=Student(2016,"sohan kathait");
	s2.display();
	return 0;
}	