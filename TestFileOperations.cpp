#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int ch;
	string name,data;
	cout<<"1.create or open a file\n2.write into file\n3.read from file\n4.exit\n"<<endl;
	do{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				{
				cout<<"Enter the name of the file to open or create"<<endl;
				cin>>name;
				ofstream outfile(name.c_str());
				if(outfile.is_open()){
					cout<<"file is created or opened"<<endl;
				}
				else{
					cout<<"Error in creating or opening a file"<<endl;
				}
				outfile.close();
				break;
		}
			case 2:
		{
				cout<<"enter the name of file to write the data"<<endl;
				cin>>name;
				ofstream outfile(name.c_str());
				if(outfile.is_open()){
					cout<<"Enter the data to write into file"<<endl;
					cin>>data;
					outfile<<data<<endl;
					cout<<"Data stored into file"<<endl;
				}
				else{
					cout<<"Error in opening a file"<<endl;
				}
				outfile.close();
				break;
	}
			case 3:
	{
				cout<<"enter the name of file to read the data"<<endl;
				cin>>name;
				ifstream inputfile(name.c_str());
				if(inputfile.is_open()){
					cout<<"reading data from file"<<endl;
					while(getline(inputfile,data)){
						cout<<data<<endl;
					}
					cout<<"Reading completed"<<endl;
				}
				else{
					cout<<"Error in opening a file"<<endl;
				}
				inputfile.close();
				break;
}
			case 4:
				cout<<"Exitting------->"<<endl;
				break;
			
			default:
				cout<<"Invalid choice"<<endl;
				break;
		}
	}while(ch!=4);
	return 0;
}

