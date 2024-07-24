#include<iostream>
#include"Car.h"
#include<typeinfo>
using namespace std;
void displayCars(Car *obj){
	obj->display();
	if(typeid(*obj)==typeid(Sedan)){
		Sedan *s=dynamic_cast<Sedan*>(obj);
		s->sedanFun();
		s->speed();
	}else if(typeid(*obj)==typeid(Sportscar)){
		Sportscar *spc=dynamic_cast<Sportscar*>(obj);
		spc->startingNos();
		spc->speed();
	}
}
int main(){
	Sedan s(2001,"Amaze","Blue",650000,4);
	displayCars(&s);
	Sportscar spc(2002,"Mastang","Brown",850000,4,2);
	displayCars(&spc);
	return 0;
}
