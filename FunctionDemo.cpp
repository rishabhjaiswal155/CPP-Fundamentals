#include<iostream>
using namespace std;

void show(){
	cout<<"Hello! Rishabh"<<endl;
}

void checkPrime(int num){
	bool flag=true;
	for(int i=2;i<num;i++){
		if(num%i==0){
			flag=false;
			break;
		}
		else{
			flag=true;
		}
	}
	if(flag==true){
		cout<<"Number "<<num<<" is prime"<<endl;
	}
	else{
		cout<<"Number "<<num<<" is not prime"<<endl;
	}
}

int getMax(int a,int b){
	if(a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
	else{
	   return 0;
	}
}

int main(){
	show();
	checkPrime(7);
	checkPrime(2);
	checkPrime(11);
	checkPrime(21);
	int max=getMax(10,100);
	cout<<"Maximum number= "<<max<<endl;
	return 0;
}
