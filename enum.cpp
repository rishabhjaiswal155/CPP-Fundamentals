#include<iostream>
using namespace std;
enum color{
	white=0,black=100,red=200,blue=400
};

int main(){
	color col=white;
	cout<<"Color white= "<<col<<endl;
	int ch;
	cout<<"1.white\n2.black\n3.red\n4.blue\n5.exit"<<endl;
	do{
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				col=white;
				cout<<"color white= "<<col<<endl;
				break;
				
			case 2:
				col=black;
				cout<<"color black= "<<col<<endl;
				break;
				
			case 3:
				col=red;
				cout<<"color red= "<<col<<endl;
				break;
				
			case 4:
				col=blue;
				cout<<"color blue= "<<col<<endl;
				break;
				
			case 5:
				break;
			
			default:
				cout<<"Invalid choice"<<endl;
				break;
		}
	}while(ch!=5);
	return 0;

}

