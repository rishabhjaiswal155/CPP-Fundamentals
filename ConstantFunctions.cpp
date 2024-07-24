#include<iostream>
using namespace std;
class Account{
	private:
		double bal;
	public:
		Account(double bal){
			this->bal=bal;
		}
		double getBal() const{
			//this->bal=this->bal+1000;//error:as it is read only object
		return this->bal;
		}
};
int main(){
	Account a(50000);
	cout<<"Account Balance= "<<a.getBal();
	return 0;
}
