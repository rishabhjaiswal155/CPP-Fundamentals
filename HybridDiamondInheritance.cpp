#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A's constructor invoked"<<endl;
		}
};
class B:virtual public A{
	public:
		B(){
			cout<<"B's constructor invoked"<<endl;
		}
		void test(){
			cout<<"B's test method"<<endl;
		}
};
class C:virtual public A{
	public:
		C(){
			cout<<"C's constructor invoked"<<endl;
		}
		void test(){
			cout<<"C's test method"<<endl;
		}
};
class D:virtual public B,public C {
	public:
		D(){
			cout<<"D's constructor invoked"<<endl;
		}
		void test(){
		 C::test();
		}
};
int main(){
	A aobj;
	B bobj;
	bobj.test();
	C cobj;
	cobj.test();
	D dobj;
	dobj.test();
	dobj.B::test();
	return 0;
}
