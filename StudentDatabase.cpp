#include<iostream>
using namespace std;
class Student{
	private:
		int rollno;
		string name,city,email;
		double per;
	public:
		Student(){
			cout<<"----Default constructor invoked-----"<<endl;
			rollno=101;
			name="Rishabh";
			city="Pune";
			email="rishabhjaiswal155@gmail.com";
			per=92.55;
		}
		Student(int rollno,string name,string city,string email,double per){
			cout<<"-----parameterize constructor-----------"<<endl;
			this->rollno=rollno;
			this->name=name;
			this->city=city;
			this->email=email;
			this->per=per;
		}
		string getName(){
			return name;
		}
		int getRollno(){
			return rollno;
		}
		string getEmail(){
			return email;
		}
		string getCity(){
			return city;
		}
		double getPer(){
			return per;
		}
		
		void setRollno(int rollno){
			this->rollno=rollno;
		}
		
		void setName(string name){
			this->name=name;
		}
		
		void setCity(string city){
			this->city=city;
		}
		
		void setEmail(string email){
			this->email=email;
		}
		
		void setPer(double per){
			this->per=per;
		}
		
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Rollno:"<<rollno<<endl;
			cout<<"city:"<<city<<endl;
			cout<<"Email:"<<email<<endl;
			cout<<"percentage:"<<per<<endl;
		}
};
int main()
{
	int ch,rn;
	string nm,city,email;
	double per;
	Student s1;
	cout<<"--------Menu------------"<<endl;
	cout<<"1.create student\n2.show student\n3.edit name\n4.edit city\n5.edit email\n6.edit rollno\n7.exit\n"<<endl;
	do{
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				{
				cout<<"enter rollno"<<endl;
				cin>>rn;
				s1.setRollno(rn);
				cout<<"enter name"<<endl;
				cin>>nm;
				s1.setName(nm);
				cout<<"enter email"<<endl;
				cin>>email;
				s1.setEmail(email);
				cout<<"enter city"<<endl;
				cin>>city;
				s1.setCity(city);
				cout<<"enter percentage"<<endl;
				cin>>per;
				s1.setPer(per);
				//Student s1(rn,nm,city,email,per);
				cout<<"-------Student created-----"<<endl;
				break;
			}
			case 2:
			{
				cout<<"Student details are:"<<endl;
				s1.display();
				break;
			}
			case 3:
			{
				cout<<"enter the new name"<<endl;
				cin>>nm;
				s1.setName(nm);
				cout<<"Name modified"<<endl;
				break;
			case 4:
				cout<<"enter new city"<<endl;
				cin>>city;
				s1.setCity(city);
				cout<<"City modified"<<endl;
				break;
		    }
			case 5:
			{
				cout<<"Enter new Email"<<endl;
				cin>>email;
				s1.setEmail(email);
				cout<<"Email modified"<<endl;
				break;
			}
			case 6:
				{
				cout<<"Enter new Roll number"<<endl;
				cin>>rn;
				s1.setRollno(rn);
				cout<<"Roll number modified"<<endl;
				break;
			    }
			case 7:
				{
				cout<<"-----Thank you------"<<endl;
				break;
			    }
			default:
				cout<<"Invalid choice"<<endl;
				break;
		}
	}while(ch!=7);	
	return 0;
}
