#include<iostream>
using namespace std;
int main(){
	int i,num;
	bool flag=true;
	cout<<"Enter number to find whether number is prime number or not"<<endl;
	cin>>num;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=false;
			break;
		}
		else{
			flag=true;
		}
		}
		if(flag==true){
			cout<<"Prime number"<<endl;
		}
		else{
			cout<<"not prime number"<<endl;
		}
	return 0;
}
