#include<iostream>
#include"Fruit.h"
#include<typeinfo>
using namespace std;
int main(){
	Fruit f;
	f.taste();
	Apple a;
	a.taste();
	a.jam();
	Orange o;
	o.taste();
	o.juice();
	Mango m;
	m.taste();
	m.pulp();
	
	Fruit *basket[3];
	basket[0]=&a;
	basket[1]=&o;
	basket[2]=&m;
     
	for(int i=0;i<3;i++){
	if(typeid(*basket[i])==typeid(Apple)){
		cout<<"At index: "<<i<<" storing Apple in basket"<<endl;
		Apple *a=dynamic_cast<Apple *>(basket[i]);
		a->taste();
		a->jam();
	}
	else if(typeid(*basket[i])==typeid(Orange)){
		cout<<"At index: "<<i<<" storing Orange in basket"<<endl;
		Orange *o=dynamic_cast<Orange *>(basket[i]);
		o->taste();
		o->juice();
	}
	else if(typeid(*basket[i])==typeid(Mango)){
		cout<<"At index: "<<i<<" storing Mango in basket"<<endl;
		 Mango *m=dynamic_cast<Mango *>(basket[i]);
		m->taste();
		m->pulp();
	}
}
	return 0;
}
