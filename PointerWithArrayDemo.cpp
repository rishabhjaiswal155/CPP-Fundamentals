#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30,40,50};
int *ptr=arr;
cout<<"value of ptr= "<<ptr<<endl;
cout<<"value of arr= "<<arr<<endl;
cout<<"value at ptr= "<<*ptr<<endl;

for(int i=0;i<5;i++){
	cout<<ptr+i<<" "<<*(ptr+i)<<endl;
}
return 0;
}


