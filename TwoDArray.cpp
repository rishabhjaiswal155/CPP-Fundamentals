#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int row,col;
	cout<<"Accepting array element"<<endl;
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			cout<<"Enter array element at "<<row<<" and "<<col<<endl;
			cin>>arr[row][col];
		}
	}
	cout<<"Displaying array elements"<<endl;
		for(row=0;row<3;row++){
			cout<<endl;
			for(col=0;col<3;col++){
			cout<<arr[row][col]<<"\t";
			}
	}
	
	return 0;
}
