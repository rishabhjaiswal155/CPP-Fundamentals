#include<iostream>
using namespace std;

inline int getMax(int a,int b){
	int max=(a>b)?a:b;
	return max;
}
void show(){
	cout<<"show()"<<endl;
}
void show(int n1){
	cout<<"show(int n1) "<<n1<<endl;
}
void show(int a,int b){
	cout<<"show(int a,int b) "<<a<<" "<<b<<endl;
}
void show(float a,int b){
	cout<<"show(float a,int b) "<<a<<" "<<b<<endl;
}

int main(){
	show();
	show(67);
	show(32,54);
	show(1.2f,6);
	int max=getMax(11,33);
	cout<<"Max="<<max<<endl;
	return 0;
}
