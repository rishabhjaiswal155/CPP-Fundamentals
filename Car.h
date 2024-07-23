#include<iostream>
using namespace std;
class Car{
	private:
		int modelno;
		string name,color;
	protected:
		double price;
		
	public:
		Car(){
			cout<<"----Default car constructor get invoked------"<<endl;
			modelno=1001;
			name="car";
			color="white";
			price=300000;
		}
		Car(Car &obj){
			cout<<"----Copy Constructor invoked------"<<endl;
		   this->modelno=obj.modelno;
		   this->name=obj.name;
		   this->color=obj.color;
		   this->price=obj.price;	
		}
		Car(int modelno,string name,string color,double price){
			cout<<"----paramterize car constructor invoked----"<<endl;
			this->modelno=modelno;
			this->name=name;
			this->color=color;
			this->price=price;
		}
		virtual void speed(){
			cout<<"------------spped of car is 80KMPH------"<<endl;
		}
		virtual void display(){
			cout<<modelno<<" "<<name<<" "<<color<<" "<<price<<endl;
		}
};

class Sedan :public Car{
	private:
		int airbags;
	public:
		Sedan(int modelno,string name,string color,double price,int airbags):Car(modelno,name,color,price){
			cout<<"Parameterize sedan constructor get invoked"<<endl;
			this->airbags=airbags;
		}
		void sedanFun(){
			cout<<"sedan car functionality"<<endl;
		}
		void speed(){
			cout<<"-----speed of Sedan car function is 180 KMPH----"<<endl;
		}
		
		void dipslay(){
			Car::display();
			cout<<"Sedan car specific details"<<endl;
			cout<<"Airbags="<<airbags<<endl;
		}
};

class Sportscar:public Car{
	private:
		int airbags;
		int nos;
	public:
		Sportscar(int modelno,string name,string color,double price,int airbags,int nos):Car(modelno,name,color,price){
			cout<<"Parameterize Sportscar constructor invoked"<<endl;
			this->airbags=airbags;
			this->nos=nos;
		}
		void startingNos(){
			cout<<"Starting NOS in sportscar"<<endl;
		}
		void speed(){
			cout<<"Speed of sportsCar is 300 KMPH"<<endl;
		}
		void display(){
			Car::display();
			cout<<"Sportscar specific details"<<endl;
			cout<<airbags<<" "<<nos<<endl;
		}
};
