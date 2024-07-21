#include<iostream>
using namespace std;
class Account{
	private:
		int accno;
		string name;
		double balance;
	public:
		void acceptDetails(){
			cout<<"Enter name,accno and balance"<<endl;
			cin>>name>>accno>>balance;
		}
		void showDetails(){
			cout<<"Name= "<<name<<endl;
			cout<<"Account number= "<<accno<<endl;
			cout<<"Balance= "<<balance<<endl;
		}
		void deposit(){
			int amount;
			cout<<"enter amount to deposit"<<endl;
			cin>>amount;
			balance=balance+amount;
			cout<<"New Balance after deposit is "<<balance<<endl;
		}
		void withDraw();
};
void Account::withDraw(){
	int amount;
	cout<<"enter amount to withdraw"<<endl;
			cin>>amount;
			balance=balance-amount;
			cout<<"New Balance after withdraw is "<<balance<<endl;
}

int main(){
	Account ac1;
	ac1.acceptDetails();
	ac1.showDetails();
	Account ac2;
	ac2.acceptDetails();
	ac2.showDetails();
	ac1.deposit();
    ac1.withDraw();
	ac2.deposit();
    ac2.withDraw();
	return 0;
}

