#include<iostream>
using namespace std;
class Student{
	private:
		int rollno=10;
	public:
		void showData(){
			cout<<"this is Student Demo "<<rollno<<endl;
		}
};
struct studIACSD{
	int rollno;
};
int main(){
	studIACSD isd;
	isd.rollno=6;
	Student s;
	s.showData();
	return 0;
	
}
