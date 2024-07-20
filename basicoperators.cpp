#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	//if,else if statement with relational operator
	if(a>b){
		cout<<"max="<<a<<endl;
	}
	else if(b>a){
		cout<<"max="<<b<<endl;
	}
	else{
		cout<<"Both are equal a==b"<<endl;
	}
	return 0;
	
}
