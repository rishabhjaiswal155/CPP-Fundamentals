#include<iostream>
using namespace std;
int main(){
	int a=20,b=10;
	int choice;
	cout<<"----------menu-------------"<<endl;
	cout<<"1.addition\n 2.subtraction\n 3.mutiplication\n 4.division \n 5.exit"<<endl;
	cout<<"Please enter the choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Addition="<<a+b<<endl;
			break;
			
			case2:
				cout<<"Subtraction="<<a-b<<endl;
				break;
				
				case 3:
					cout<<"Mutiplication="<<a*b<<endl;
					break;
					
					case 4:
						cout<<"Divison="<<a/b<<endl;
						break;
						
						default:
							cout<<"Invalid choice"<<endl;
							break;
	}
	return 0;
}
