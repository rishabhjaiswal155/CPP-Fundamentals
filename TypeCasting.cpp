#include<iostream>
#include<typeinfo>
#include"Car.h"
using namespace std;
int main(){
	Car *cars[3];
	Car c(1001,"Santro","Grey",450000);
	Sedan s(1002,"Honda-city","Silver",110000,5);
	Sportscar spc(1003,"Mazda","Orange",2500000,4,2);
	
	cars[0]=&c;
	cars[1]=&s;
	cars[2]=&spc;
	
	for(int i=0;i<3;i++){
		if(typeid(*cars[i])==typeid(Car)){
			cout<<"At index: "<<i<<" Storing Car object"<<endl;
		}
		else if(typeid(*cars[i])==typeid(Sedan)){
		    cout<<"At index: "<<i<<" Storing Sedan object"<<endl;
		    Sedan *objs=dynamic_cast<Sedan*>(cars[i]);
		    objs->sedanFun();
		    objs->speed();
		}
		else if(typeid(*cars[i])==typeid(Sportscar)){
			cout<<"At index: "<<i<<" Storing SportsCar object"<<endl;
            Sportscar *objspc=dynamic_cast<Sportscar*>(cars[i]);
			objspc->startingNos();
			objspc->speed();		
		}
	}
	return 0;
}
