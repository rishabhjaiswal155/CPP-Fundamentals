#include<iostream>
using namespace std;
int main(){
	int i;
	//print the numbers from 1 to 10
	cout<<"printing numbers from 1 to 10"<<endl;
	for(i=1;i<=10;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	//print numbers from 10 to 1
cout<<"printing numbers from 10 to 1"<<endl;
	for(i=10;i>=1;i--){
		cout<<i<<" ";
	}
	cout<<" "<<endl;
	//print even numbers from 1 to 50
	cout<<"printing even numbers from 1 to 50"<<endl;
	for(i=1;i<=50;i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	return 0; 
}
