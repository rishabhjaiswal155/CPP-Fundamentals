#include<iostream>
using namespace std;
namespace BankApplication{
class Bank{
private:
int cid;
string custName,city,email;
double balance;
public:
 Bank(){
 	cout<<"-----Default constructor invoked------"<<endl;
 	cid=101;
 	custName="Rishabh";
 	city="Pune";
 	email="rishabh@gmail.com";
 	balance=10000;
 }
 Bank(int cid,string custName,string city,string email,double balance){
 	cout<<"-----Parameterize constructor invoked------"<<endl;
    this->cid=cid;
	this->custName=custName;
	this->city=city;
	this->email=email;
	this->balance=balance;	
 } 
 void setCity(string city){
 	this->city=city;
 }	
 
 void setEmail(string email){
 	this->email=email;
 }
 string getCustName(){
 	return custName;
 }	
 double getBalance(){
 	return balance;
 }
 string getCity(){
 	return city;
 }
 string getEmail(){
 	return email;
 }
 void display(){
 	cout<<"Customer details"<<endl;
 	cout<<"Customer id:"<<cid<<endl;
	 cout<<"Customer Name:"<<custName<<endl;
	 cout<<"Customer Email:"<<email<<endl;
	 cout<<"Customer city:"<<city<<endl;
	 cout<<"Customer Balance:"<<balance<<endl;
 }
 void deposit(double amt){
 	this->balance=this->balance+amt;
 	cout<<"After Deposit Modified Balance="<<this->balance<<endl;
 }
 void withdraw(double amt){
 	this->balance=this->balance-amt;
 	cout<<"After withdraw Modified Balance="<<this->balance<<endl;
 }
};
}
