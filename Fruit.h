#include<iostream>
using namespace std;
class Fruit{
	public:
	virtual void taste(){
		cout<<"No taste as such"<<endl;
	}
};
class Apple:public Fruit{
	public:
	 void taste(){
	 	cout<<"Apple taste sweet"<<endl;
	 }
	 void jam(){
	 	cout<<"created Jam from apple"<<endl;
	 }
};
class Orange:public Fruit{
	public:
		void taste(){
			cout<<"Orange taste sweet and soar"<<endl;
		}
		void juice(){
			cout<<"creating Orange juice"<<endl;
		}
};
class Mango:public Fruit{
	public:
	void taste(){
		cout<<"Mango tastes sweet"<<endl;
	}
	void pulp(){
		cout<<"Pulp is extracted from mango"<<endl;
	}
};

