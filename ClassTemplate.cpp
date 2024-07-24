#include<iostream>
using namespace std;
template <class T>
class GenClass{
	private:
		T a;
	public:
		GenClass(T a){
			this->a=a;
		}
		void print(){
			cout<<"Value of a= "<<a<<endl;
		}
};
class NonGenClass{
	private:
		int b;
	public:
		NonGenClass(int b){
			this->b=b;
		}
		void print(){
			cout<<"Value of b= "<<b<<endl;
		}
};

int main(){
	NonGenClass obj1(600);
	obj1.print();
//	NonGenClass obj2("Rishabh");
//	obj2.print();error
	GenClass<int> obj3(15);
	obj3.print();
	GenClass<char> obj4('R');
	obj4.print();
	GenClass<string> obj5("Rishabh");
	obj5.print();
	return 0;
}
