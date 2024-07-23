#include<iostream>
#include"Customer.h"
using namespace std;
int main(){
	Customer::showTotalCount();
	Customer c1;
	c1.display();
	
	Customer c2("Lucky","Mumbai");
	c2.display();
	Customer::showTotalCount();
	
	Customer c3("Jaya","Washim");
	c3.display();
	
	Customer::showTotalCount();
	return 0;
	
}
