#include<iostream>
using namespace std;
int main(){
	int a=20;//static initialization
	cout<<"The value of a is"<<a<<endl;
	int b;
	cout<<"Enter the value of b"<<endl;//dynamic initialization of variable
	cin>>b;
	cout<<"The value of b is"<<b<<endl;
	int c;
	c=a+b;
	cout<<"sum= "<<c<<endl;
	int d=a++;
	cout<<"The value of d is "<<d<<endl;
	cout<<"The value of a is after post increment is"<<a<<endl;
	d=++a;
		cout<<"The value of d is "<<d<<endl;
	cout<<"The value of a is after pre increment is"<<a<<endl;
	return 0;
	}
