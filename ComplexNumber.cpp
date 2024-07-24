#include<iostream>
using namespace std;
class Complex{
	int real,imag;
	public:
		Complex(int real,int imag){
			cout<<"Parameterize constructor invoked"<<endl;
			this->real=real;
			this->imag=imag;
		}
		void display(){
			cout<<"Real: "<<real<<" "<<"Imaginary: "<<imag<<endl;
		}
		Complex operator+(const Complex &obj){
			int r,i;
			r=this->real+obj.real;
			i=this->imag+obj.imag;
			Complex c3(r,i);
			return c3;
		}
};

int main(){
	Complex c1(10,20);
	c1.display();
	Complex c2(30,40);
	c2.display();
	Complex c3=c1+c2;
	c3.display();
	return 0;
}
