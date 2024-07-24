#include<iostream>
using namespace std;
class Date{
	private:
		int d,m,y;
	public:
		Date(){
			cout<<"Default date"<<endl;
			d=1;
			m=06;
			y=1990;
		}
		Date(int d,int m,int y){
			this->d=d;
			this->m=m;
			this->y=y;
		}
		void showDate(){
			cout<<"Date: "<<d<<"/"<<m<<"/"<<y<<endl;
		}
};
class Student{
	private:
		int sid;
		string name;
		Date *dob;
	public:
		Student(int sid,string name,int d,int m,int y){
			this->sid=sid;
			this->name=name;
			dob=new Date(d,m,y);
		}
		void showStudent(){
			cout<<"Student details are:"<<endl;
			cout<<"Student id: "<<sid<<endl;
		    cout<<"Student Name: "<<name<<endl;
		    cout<<"Student Dob: "<<" ";
			dob->showDate();
		}
};

int main(){
	Student *s2=new Student(101,"Rishabh",22,04,1996);
	s2->showStudent();
	return 0;
}
