#include<iostream>
using namespace std;
class MyMath{
	private:
	 int a,b;
    public:
	void add(int a,int b){
		cout<<"Addition="<<(a+b)<<endl;
	}
	void sub(int a,int b){
		cout<<"Substraction="<<(a-b)<<endl;
	}	
	int max(int a,int b){
		if(a>b)
		return a;
		else
		return b;
	}
	void createArray(int size){
		cout<<"Array size is "<<size<<endl;
		int *arr=new int[size];
		for(int i=0;i<size;i++){
		cout<<"Enter element"<<endl;
	    cin>>arr[i];
	    }
	    cout<<"Displaying array elements"<<endl;
	    for(int i=0;i<size;i++){
	    	cout<<arr[i]<<" ";
	    }
	}	
};
