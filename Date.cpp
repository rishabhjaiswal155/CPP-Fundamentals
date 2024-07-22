#include<iostream>
using namespace std;
class Date{
	private:
		int day,month,year;
		
	public:
		Date(){
			cout<<"-----Default constructor invoked---"<<endl;
			day=1;
			month=6;
			year=1990;
		}
		Date(int d,int m,int y){
			cout<<"-----Parameterize constructor invoked-----"<<endl;
			day=d;
			month=m;
			year=y;
		}
		void display(){
			cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
		}
};

int main(){
	Date d1;
	d1.display();
	Date d2(22,04,1996);
	d2.display();
	return 0;
}
