#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Please enter any number"<<endl;
	cin>>num;
	int sum=0;
	while(num>0){
		sum+=num;
		cout<<"total sum="<<sum<<endl;
	    cout<<"enter number"<<endl;
		cin>>num;
	}
	return 0;
	
}
