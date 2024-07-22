#include<iostream>
using namespace std;
class Employee{
	private:
		int empid;
		string empName;
		double salary;
		
	public:
		void assignDetails(int eid,string eName,double sal){
			empid=eid;
			empName=eName;
			salary=sal;
		}
		void displayDetails(){
			cout<<empid<<" "<<empName<<" "<<salary<<endl; 
		}
};

int main(){
	Employee e1,e2;
	e1.assignDetails(101,"Rishabh",250000);
	e2.assignDetails(102,"Vishal",350000);
	e1.displayDetails();
	e2.displayDetails();
	return 0;
}
