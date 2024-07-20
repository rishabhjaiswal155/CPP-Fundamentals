#include<iostream>
using namespace std;
int main(){
//	int i,arr[5]={10,20,30,40,50};
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<" ";
//	}
//    int i,arr[5];
//    cout<<"please enter the 5 elements of an array"<<endl;
//    for(i=0;i<5;i++){
//    	cin>>arr[i];
//    }
int i,size,ele;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[size];
for(i=0;i<5;i++){
	cout<<"enter element"<<endl;
	cin>>ele;
	arr[i]=ele;
}
    cout<<"Array elements are"<<endl;
    for(i=0;i<5;i++){
    	cout<<arr[i]<<" ";
    }
    
	return 0;
}
