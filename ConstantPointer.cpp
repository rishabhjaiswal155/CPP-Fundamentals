#include<iostream>
using namespace std;
int main(){
	const int n1=20;
	const int n2=30;
	const int *ptr=&n1;//pointer can point to differrent variable but cannot change its value
	cout<<"-----pointer to constant------"<<endl;
	cout<<"ptr= "<<ptr<<" &n1= "<<&n1<<endl;
	cout<<"*ptr= "<<*ptr<<" n1= "<<n1<<endl;
	//*ptr=400;//error
	ptr=&n2;
	cout<<"ptr= "<<ptr<<" &n2= "<<&n2<<endl;
	cout<<"*ptr= "<<*ptr<<" n2= "<<n2<<endl;
	
	cout<<"-----constant pointer------"<<endl;
	int n3=200;
	int n4=500;
	int * const ptr1=&n3;//Pointer cannot point to different variable but can change its value
	cout<<"ptr1= "<<ptr1<<" &n3= "<<&n3<<endl;
	cout<<"*ptr1= "<<*ptr1<<" n3= "<<n3<<endl;
	*ptr1=400;
	//ptr1=&n2;//error
	cout<<"ptr1= "<<ptr1<<" &n3= "<<&n3<<endl;
	cout<<"*ptr1= "<<*ptr1<<" n3= "<<n3<<endl;

	return 0;
	
}
