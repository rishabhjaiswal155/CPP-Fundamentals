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
			cout<<"Const_cast operator"<<endl;
			(const_cast<Account*>(this))->bal=this->bal+1000;
			//this->bal=this->bal+1000;//error:as it is read only object
		return this->bal;
		}
};
int main(){
	Account a(50000);
	cout<<"Account Balance= "<<a.getBal()<<endl;
	float f=20.9;
	int c=f;
	cout<<"converting float f: "<<f<<" to int c: "<<c<<endl;
	
	int d=static_cast<int>(f);
	cout<<"converting float f: "<<f<<" to int d: "<<d<<endl;
	
	const int p=200;
	 int &y=const_cast<int &>(p);
	 
	 cout<<"const p= "<<p<<" ref= "<<y<<endl;
	 y++;
	 cout<<"const p= "<<p<<" ref= "<<y<<endl;
	
	return 0;
}
