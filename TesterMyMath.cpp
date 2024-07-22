#include<iostream>
#include"MyMath.h"
using namespace std;
int main(){
	cout<<"Tester application for myMath"<<endl;
	MyMath m;
	m.add(12,28);
	m.sub(90,45);
	m.max(56,65);
	m.createArray(5);
	return 0;
}
