#include<iostream>
using namespace std;
class Account{
	private:
		int accno;
		string name;
		double bal;
	public:
		Account();
		Account(int accno,string name,double bal);
		~Account();
		void deposit(double amt);
		void withdraw(double amt);
		void moneyTransfer(double amt,Account &receiverAct);
		void display();
};

