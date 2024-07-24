#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the values for a,b"<<endl;
	cin>>a>>b;
	try{
		c=a+b;
		cout<<"Addition="<<c<<endl;
		c=a-b;
		cout<<"Substraction="<<c<<endl;
		c=a*b;
		cout<<"Multiplication="<<c<<endl;
		if(b<0){
			throw "Dr is less than zero";
		}
		if(b==0){
			throw 999;
		}
		c=a/b;
		cout<<"Division="<<c<<endl;
	}
	catch(const char* str){
		cout<<"Error: "<<str<<endl;
	}
	catch(int d){
		cout<<"Error: "<<d<<" Divide by Zero "<<endl;
	}
	catch(...){
		cout<<"Exception occured "<<endl;
	}
	return 0;
}

