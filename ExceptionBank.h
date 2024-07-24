#include<iostream>
using namespace std;
namespace Bank{
class BankException{
public:
string msg;
public:
BankException(string msg){
	this->msg=msg;
}	
};
class BankAccount{
	private:
		double bal;
	public:
		BankAccount(double bal){
			this->bal=bal;
		}
		void withdraw(){
			BankException minEx("Minimum balance Exception");
			BankException amtEx("insufficient Balance");
			cout<<"Inside withdraw"<<endl;
			double amt;
			cout<<"Enter amount to withdaw"<<endl;
			cin>>amt;
			if(this->bal<1000){
				throw minEx;
			}
			if(this->bal<amt){
				throw amtEx;
			}
			this->bal=this->bal-amt;
			cout<<"After withdraw Balance= "<<this->bal<<endl;
		}
		void balanceinq(){
			cout<<"Balance= "<<bal<<endl;
		}
};
}
