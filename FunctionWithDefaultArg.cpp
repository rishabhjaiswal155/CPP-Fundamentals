#include<iostream>
using namespace std;
void showData(int n1,int n2){
	cout<<"Number1= "<<n1<<" Number2= "<<n2<<endl;
}
void displayData(int n1,int n2=500){
	cout<<"Number1= "<<n1<<" Number2="<<n2<<endl; 
}
int main(){
	cout<<"Default parameter value in Functions"<<endl;
	showData(10,20);
	//showData(10);//error
	displayData(500,600);
	displayData(700);
	return 0;
	
}
