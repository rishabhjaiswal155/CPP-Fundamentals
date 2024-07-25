#include<iostream>
#include<string>
using namespace std;
int main(){
	string s="Hello,Rishabh";
	cout<<"Length of String: "<<s.length()<<endl;
	cout<<"character at index 7:"<<s[7]<<endl;
	cout<<"substring:"<<s.substr(7,5)<<endl;
	s=s+"Bye bye";
	cout<<"Appending to string:"<<s<<endl;
	int pos=s.find("Bye");
	if(pos!=string::npos){
		cout<<"Found at index"<<pos<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}
	s.replace(pos,4,"Tata");
	cout<<"Modified string is: "<<s<<endl;
	s.erase(5,6);
	cout<<"string after erase is: "<<s<<endl;
	string s2="Jaiswal";
	if(s==s2){
		cout<<"string are equal"<<endl;
	}
	else{
		cout<<"Not equal"<<endl;
	}
	return 0;
}
