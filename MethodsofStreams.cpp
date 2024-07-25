#include<iostream>
using namespace std;
int main(){
	int a=10;
	cout<<"start>";
	cout.width(25);
	cout<<"a="<<a<<endl;
	cout.fill('*');
	cout.width(15);
    cout<<"a= "<<a<<endl;
	cout.width(5);
	cout<<"a= "<<a<<endl;
	cout.fill('*');
	cout.width(3);
	cout<<"a= "<<a<<endl;
	cout.width(7);
	cout<<"a= "<<a<<endl;
	
	char d;
	cout<<"Enter the character"<<endl;
	d=cin.peek();
	cout<<"The first character is "<<d<<endl;
     
    float d1=20.904698f;
    cout<<"The floating point value is "<<d1<<endl;
    cout.setf(ios::fixed,ios::floatfield);
    cout<<"The floating point value after setf() is "<<d1<<endl;
    cout.precision(4);
    cout<<"The floating point value after precision() is "<<d1<<endl;
    
    char c1[100];
    cin.ignore();
    cout<<"Enter data into Array"<<endl;
	cin.getline(c1,20);
	cout<<c1<<endl;
	cout<<"Data in array"<<endl;
	cout.write(c1,10);
		return 0;
}
