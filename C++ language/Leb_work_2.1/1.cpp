#include<iostream>
using namespace std;

class company{
	public :
		static string sruni;
		int id,age,salary,experians;
		string name,role,city;
		
		void setData (int id,string name,int age,string role,int salary,string city,int experians){
			
			this->id=id;
			this->name=name;
			this->age=age;
			this->role=role;
			this->salary=salary;
			this->city=city;
			this->experians=experians;
		}
		void getData(){
			cout<<"Enter id :- "<<this->id<<endl;
			cout<<"Enter name :- "<<this->id<<endl;
			cout<<"Enter age :- "<<this->id<<endl;
			cout<<"Enter role :- "<<this->id<<endl;
			cout<<"Enter salary :- "<<this->id<<endl;
			cout<<"Enter city :- "<<this->id<<endl;
			cout<<"Enter experians :- "<<this->id<<endl;
			cout<<"------------------"<<this->id<<endl;
		}
};
main(){
    
}
