#include<iostream>
using namespace std;

class hotel{
	public:
		int id,eyear,staffqoun,roomqoun;
		string name,type,rating,location;
		void setDetails(int id,int eyear,int staffqoun,int roomqoun,string name ,string type,string rating,string location){
			this->id=id;
			this->eyear=eyear;
			this->staffqoun=staffqoun;
			this->roomqoun=staffqoun;
			this->name=name;
			this->type=type;
			this->rating=rating;
			this->location=location;
		}
		void getDetails(){
			cout<<"ID:- "<<id<<"Name:- "<<name<<"Type:- "<<type<<"Rating:- "<<rating<<"location:- "
			<<location<<"Establish Year:- "<<eyear<<"staff qountity:- "<<staffqoun<<"room qountity:- "<<roomqoun<<endl;
			
		}

};
main(){
	hotel c;
		int id,eyear,staffqoun,roomqoun,no,i;
		string name,type,rating,location;
		
		cout<<"How many entry do you want to add :-"<<endl;
		cin>>no;
		
		for(i=0;i<no;i++)
		cout<<"enter id :-";
		cin>>id;
		cout<<"enter hotel name :- ";
		cin>>name;
		cout<<"enter hotel type :- ";
		cin>>type;
		cout<<"enter hotel rating :- ";
		cin>>rating;
		cout<<"enter hotel location :- ";
		cin>>location;
		cout<<"enter establish year :- ";
		cin>>eyear;
		cout<<"enter hotel staff qountity :- ";
		cin>>staffqoun;
      	cout<<"enter hotel room qountity :- ";
		cin>>roomqoun;	
	 
}
