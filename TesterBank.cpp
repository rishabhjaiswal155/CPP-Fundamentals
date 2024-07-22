#include<iostream>
#include"Bank.h"
using namespace std;
int main(){
	cout<<"Tester Bank Application"<<endl;
	BankApplication::Bank b1;
	b1.display();
	BankApplication::Bank b2(102,"Lucky Jaiswal","Akot","lucky@gmail.com",50000);
	b2.display();
	b2.deposit(10000);
	b2.display();
	b2.withdraw(1000);
	b2.display();
	
	typedef BankApplication::Bank mybank;
	mybank mb;
	mb.display();
	mb.setEmail("rishabhjaiswal@gmail.com");
	mb.setCity("Akola");
	mb.display();
	return 0;
}


