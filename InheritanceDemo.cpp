#include<iostream>
using namespace std;
class Employee{
	private:
		int eid;
		string ename;
	protected:
		double sal;
	public:
		Employee(){
		}
		Employee(int eid,string ename,double sal){
			this->eid=eid;
			this->ename=ename;
			this->sal=sal;
		}
		virtual void calSal(){
			cout<<"Salary: "<<sal<<endl;
		}
		void displayEmp(){
			cout<<"Employee details are:"<<endl;
			cout<<"Employee Name:"<<ename<<endl;
			cout<<"Employee id: "<<eid<<endl;
			cout<<"Employee salary: "<<sal<<endl;
		}
};
class Manager:public Employee{
	private:
		double incentive;
		string deptName;
	public:
		Manager(int eid,string ename,double sal,string deptName,double incentive):Employee(eid,ename,sal){
			this->incentive=incentive;
			this->deptName=deptName;
		}
		void calSal(){
			cout<<"Manager Salary= "<<this->sal+incentive<<endl;
		}
			
};
int main(){
    Employee e(101,"Rishabh",50000);
    e.calSal();
	e.displayEmp();
    Manager m(102,"vishal",50000,"HR",20000);
    m.calSal();
    
    Employee *emptr=new Manager(109,"Kranthi",90000,"Operations",20000);
    emptr->calSal();
    
    Employee pace[3];
    pace[0]=e;
    pace[1]=m;
    pace[2]=*emptr;
    for(int i=0;i<3;i++){
    	pace[i].calSal();
    }
      return 0;
}
