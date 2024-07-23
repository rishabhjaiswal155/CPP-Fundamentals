#include<iostream>
#include"Customer.h"
using namespace std;
int Customer::custCounter=0;
int Customer::custIdCounter=1;
Customer::Customer(){
	cout<<"Default constructor invoked"<<endl;
	custId=custIdCounter;
	name="Rishabh";
	city="pune";
	custCounter++;	
}
Customer::Customer(string name,string city){
    cout<<"Parameterize constructor invoked"<<endl;
	custIdCounter++;
	this->custId=custIdCounter;
	this->name=name;
	this->city=city;
	custCounter++;
}
void Customer::display(){
	cout<<"Customer details are:"<<endl;
	cout<<"Customer id= "<<custId<<endl;
	cout<<"customer Name= "<<name<<endl;
	cout<<"City= "<<city<<endl;
}
void Customer::showTotalCount(){
	cout<<"Total Customer= "<<custCounter<<endl;
}





