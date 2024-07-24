#include<iostream>
#include"ExceptionBank.h"
using namespace std;
int main(){
	try{
	typedef Bank::BankAccount sbi;
	sbi sb(50000);
	sb.balanceinq();
	sb.withdraw();
	sb.withdraw();
	sb.withdraw();
	sb.balanceinq();
}
catch(Bank::BankException &bk){
	cout<<bk.msg<<endl;
} 
catch(const char* str){
	cout<<"Exception occurred:"<<str<<endl;
}
catch(...){
	cout<<"exception occurred"<<endl;
}
	return 0;
}

