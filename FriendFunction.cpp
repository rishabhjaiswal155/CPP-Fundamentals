#include<iostream>
using namespace std;
class FriendFunction{
	private:
		int n1,n2;
	public:
		FriendFunction(int n1,int n2){
			this->n1=n1;
			this->n2=n2;
		}
		void display(){
			cout<<"Numbers are n1= "<<n1<<" "<<"n2= "<<n2<<endl;
		}
		friend void changeNumber(FriendFunction &obj);
};
void changeNumber(FriendFunction &obj){
	obj.n1=145;
	obj.n2=265;
	cout<<"Numbers getting changed"<<endl;
	obj.display();
}
int main(){
	FriendFunction f(65,45);
	f.display();
	changeNumber(f);
	return 0;
}
