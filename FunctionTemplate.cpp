#include<iostream>
using namespace std;
template <class T>
void swapGen(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
	cout<<"inside swap: a= "<<a<<" "<<"b= "<<b<<endl;
}
int main(){
	int a=10,b=11;
	swapGen(a,b);
	double d=12.12,e=11.11;
	swapGen(d,e);
	char c1='A',c2='B';
	swapGen(c1,c2);
	string s1="Rishabh",s2="Lucky";
	swapGen(s1,s2);
	return 0;
}
