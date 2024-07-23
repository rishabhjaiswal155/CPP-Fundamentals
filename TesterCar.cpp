#include<iostream>
#include"Car.h"
using namespace std;
int main(){
	cout<<"------Car Class-----"<<endl;
	Car c;
	c.speed();
	c.display();
	Car c1(5001,"Alto","white",300000);
	c1.speed();
	c1.display();
	
	cout<<"--------Sedan class-------"<<endl;
	Sedan s(6001,"Dzire","blue",800000,4);
	s.speed();
	s.sedanFun();
	s.display();
	
	cout<<"----------Sportscar class-------"<<endl;
	Sportscar spc(8001,"Ferrari","Red",800000,4,2);
	spc.speed();
	spc.startingNos();
	spc.display();
	
	Car *ptr=&s;
	ptr->speed();
	ptr->display();
	
	Car *cars[3];
	Car car(7001,"Indica","Grey",450000);
	Sedan sedan(8001,"Ciaz","Coffee",850000,5);
	Sportscar sport(4001,"Lambhorghini","Yellow",800000,2,2);
	
	cars[0]=&car;
	cars[1]=&sedan;
	cars[2]=&sport;
	
	for(int i=0;i<3;i++){
		cars[i]->display();
	}
	
	Car c2(c1);
	c2.display();
	return 0;
}
