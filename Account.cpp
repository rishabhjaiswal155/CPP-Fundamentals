#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(){
	cout<<"Default constructor invoked"<<endl;
	accno=101;
	name="Rishi";
	bal=10000;
}
Account::Account(int accno,string name,double bal){
cout<<"parameterize constructor invoked"<<endl;
this->accno=accno;
this->name=name;
this->bal=bal;
}
Account::~Account(){
	cout<<"Destructor get invoked"<<endl;
}
void Account::deposit(double amt){
	this->bal=this->bal+amt;
	cout<<"After deposit modified balance= "<<this->bal<<endl;
}
void Account::withdraw(double amt){
	this->bal=this->bal-amt;
	cout<<"After withdraw modified balance= "<<this->bal<<endl;
}
void Account::moneyTransfer(double amt,Account &receiverAct){
	this->bal=this->bal-amt;
	receiverAct.bal=receiverAct.bal+amt;
	cout<<"Money Tranferred from "<<this->name<<" to "<<receiverAct.name<<endl;
}
void Account::display(){
	cout<<"Account details are"<<endl;
	cout<<"Account number: "<<accno<<endl;
	cout<<"Customer name: "<<name<<endl;
	cout<<"Account Balance: "<<bal<<endl;
}

