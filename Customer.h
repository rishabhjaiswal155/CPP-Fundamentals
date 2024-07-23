#include<iostream>
using namespace std;
class Customer{
	private:
		int custId;
		string name,city;
		static int custCounter;
		static int custIdCounter;
	public:
		Customer();
		Customer(string name,string city);
		void display();
		static void showTotalCount();
};
