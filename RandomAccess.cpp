#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string line;
	ifstream input("rishabh.txt");
	cout<<"The position of pointer is "<<input.tellg()<<endl;
	while(getline(input,line)){
		cout<<line<<endl;
	}
	cout<<"Now The position of pointer is "<<input.tellg()<<endl;
	input.clear();
	input.seekg(2);
	cout<<"Now The position of pointer is "<<input.tellg()<<endl;
	cout<<"Skip first 2 characters from file now the charcters are:"<<endl;
	while(getline(input,line)){
		cout<<line<<endl;
	}
	input.close();
	return 0;
}
