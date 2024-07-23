#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void area()=0;
		void display(){
			cout<<"Area of shape class"<<endl;
		}
};
class Square:public Shape{
	public:
		void area(){
			cout<<"Area of Square"<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void area(){
			cout<<"Area of Rectangle"<<endl;
		}
};
int main(){
	Square s;
	s.area();
	s.display();
	Rectangle r;
	r.area();
	r.display();
	return 0;
}
