#include<iostream>
#include"Account.h"
using namespace std;
int main(){
	Account ac1;
	ac1.display();
	ac1.deposit(5000);
	ac1.display();
	ac1.withdraw(2000);
	ac1.display();
	
	Account ac2(105,"Lucky",50000);
	ac2.display();
	ac2.deposit(10000);
	ac2.display();
	ac2.withdraw(6000);
	ac2.display();
	
	ac1.moneyTransfer(10000,ac2);
	ac1.display();
	ac2.display();

    
	
	Account *ptr=new Account(110,"Surabhi",9800);
	ptr->display();
	delete ptr;
	
	Account BankAcc[2];
	BankAcc[0]=ac1;
	BankAcc[1]=ac2;
	for(int i=0;i<2;i++){
		BankAcc[i].display();
	}
	
	return 0;
}
