#include<iostream>
using namespace std;
class Employee{
	public:
		Employee(){
			cout<<"Employee Default constructor invoked"<<endl;
		}
		
		void empMethod(){
			cout<<"Employee specific method"<<endl;
		}
		void calSal(){
			cout<<"salary of employee"<<endl;
		}
};
class Manager:public Employee{
	public:
	void managerMethod(){
		cout<<"Manager specific method"<<endl;
	}
	Manager(){
		cout<<"default constuctor of Manager invoked"<<endl;
	}
	void calManSal(){
		cout<<"Manager salary methods"<<endl;
	}
};

int main(){
	Employee e;
	e.empMethod();
	e.calSal();
	Manager m;
	m.empMethod();
	m.calSal();
	m.managerMethod();
	m.calManSal();
	return 0;
}
