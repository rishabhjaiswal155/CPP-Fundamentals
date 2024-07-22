#include<iostream>
using namespace std;
class Product{
	private:
		int productId;
		string productName;
		double price;
	public:
		Product(){
			cout<<"----Default Constructor invoked-----"<<endl;
			productId=501;
			productName="chair";
			price=500;
		}
		Product(int productId,string productName,double price){
			cout<<"----Parameterize constructor invoked----"<<endl;
			this->productId=productId;
			this->productName=productName;
			this->price=price;
		}
		void showDetails(){
			cout<<"Product Details: productId:"<<productId<<" productName:"<<productName<<" product price:"<<price<<endl;
		} 
};
int main(){
	Product p1;
	p1.showDetails();
	Product p2(601,"Table",2000);
	p2.showDetails();
	return 0;
}
