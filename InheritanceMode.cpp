#include<iostream>
using namespace std;
class Parent{
	private:
		void privateParentMethod(){
			cout<<"This is Parents private method"<<endl;
		}
	public:
         void publicParentMethod(){
			cout<<"This is Parents public method"<<endl;
		}
	protected:
		void protectedParentMethod(){
			cout<<"This is Parents protected method"<<endl;
		}
};
class Child1:public Parent{
	public: 
	void test(){
		cout<<"This is test of child1"<<endl;
		this->protectedParentMethod();
		this->publicParentMethod();
	}
};
class Child2:private Parent{
	public:
	void test(){
		cout<<"This is test of child2"<<endl;
	    this->protectedParentMethod();
		this->publicParentMethod();
	}
};
class Child3:protected Parent{
	public:
		void test(){
			cout<<"This is test of child3"<<endl;
			this->protectedParentMethod();
	      	this->publicParentMethod();
		}
};
int main(){
	Parent p;
	p.publicParentMethod();
	//p.privateParentMethod();
	//p.protectedParentMethod();
	
	Child1 c1;
	c1.test();
	//c1.protectedParentMethod();
    c1.publicParentMethod();
	
	Child2 c2;
	c2.test();
	//c2.protectedParentMethod();
    //c2.publicParentMethod();
	
	Child3 c3;
	c3.test();
	//c3.protectedParentMethod();
    //c3.publicParentMethod();
	
	return 0;
}
