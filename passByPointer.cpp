#include<iostream>
using namespace std;
void changebyValue(int a){
	a=a+100;
	cout<<"Inside changebyValue function a="<<a<<endl;
}

void changebyPointer(int *a){
	*a=*a+100;
	cout<<"Inside changebyPointer function a="<<*a<<endl;
}

int main(){
	int x=20;
	int refx=x;
	int *ptr=&x;
	
    cout<<"Before calling changebyValue function from outside x="<<x<<endl;
    changebyValue(x);
    cout<<"After calling changebyValue function from outside x="<<x<<endl;

    cout<<"Before calling changebyPointer function from outside x="<<x<<endl;
    changebyPointer(&x);
    cout<<"After calling changebyPointer function from outside x="<<x<<endl;
	
	return 0;
	
}
