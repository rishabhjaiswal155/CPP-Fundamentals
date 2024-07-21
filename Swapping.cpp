#include<iostream>
using namespace std;
void swapByValue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"Inside swapByValue function a="<<a<<" and b="<<b<<endl;
}
void swapByRef(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"Inside swapByRef function a="<<a<<" and b="<<b<<endl;
}

int main(){
	int m=10;
	int &refM=m;
	cout<<"value of m="<<m<<" and value of &refM="<<&refM<<endl;
	
	int x=10,y=30;
	int &refX=x,&refY=y;
	cout<<"value of x="<<x<<" and value of &refX="<<&refX<<endl;
	cout<<"value of y="<<y<<" and value of &refY="<<&refY<<endl;

    cout<<"Before swapByValue function x="<<x<<" and y="<<y<<endl;
    swapByValue(x,y);
    cout<<"After swapByValue function x="<<x<<" and y="<<y<<endl;
    
    cout<<"Before swapByRef function x="<<x<<" and y="<<y<<endl;
    swapByRef(x,y);
    cout<<"After swapByRef function x="<<x<<" and y="<<y<<endl;
    
	return 0;
}
