#include<iostream>
#include<fstream>
using namespace std;
class Student{
	private:
		int rn;
		string nm;
		double per;
	public:
		void accept(){
			cout<<"Enter Roll number"<<endl;
			cin>>rn;
			cout<<"Enter name"<<endl;
			cin>>nm;
			cout<<"Enter percentage"<<endl;
			cin>>per;
		}
		void display(){
			cout<<"Student name: "<<nm<<endl;
			cout<<"Student Roll number: "<<rn<<endl;
			cout<<"Student percentage: "<<per<<endl;
		}
};
int main(){
	Student s;
    s.accept();
    ofstream out("student.dat");
    out.write((char *)&s,sizeof(Student));
    cout<<"Student details stored into file"<<endl;
    out.close();
    
    Student s1;
    ifstream input("student.dat");
    input.read((char *)&s1,sizeof(Student));
    s1.display();
    input.close();  
}
