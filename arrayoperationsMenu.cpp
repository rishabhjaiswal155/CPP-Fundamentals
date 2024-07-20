#include<iostream>
using namespace std;
int main(){
	int i,choice,size,num,sum=0;
	bool status=false;
	bool flag=false;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"-------------------menu for Array operations-------------"<<endl;
	cout<<"1.Accept array elements\n2.Displaying array elements\n3.searching an element\n4.sum of array elements\n5.Even element\n6.exit\n"<<endl;
	do{
		cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				status=true;
				if(status==true){
					for(i=0;i<size;i++){
						cout<<"enter element"<<endl;
						cin>>arr[i];
					}
				}else{
					status=false;
					cout<<"Array is empty!please enter the elements"<<endl;
				}
				break;
				
			case 2:
				if(status==true){
					cout<<"Array elements are:"<<endl;
					for(i=0;i<size;i++){
						cout<<arr[i]<<" "<<endl;
					}
				}else{
					status=false;
					cout<<"No elements to display!"<<endl;
				}
				break;
				
			case 3:
				if(status==true){
					cout<<"enter element to search in array"<<endl;
					cin>>num;
					for(i=0;i<size;i++){
						if(arr[i]==num){
							flag=true;
							break;
							}
						else{
							flag=false;
							//cout<<"Element not found"<<endl;
						}
					}
					if(flag==true){
						cout<<"Element found"<<endl;
					}else{
						cout<<"element not found"<<endl;
					}
				}
				else{
					status=false;
					cout<<"Array is empty!"<<endl;
				}
				break;
				
		     case 4:
		     	if(status==true){
		     		cout<<"Sum of array elements are"<<endl;
		     		for(i=0;i<size;i++){
		     			sum=sum+arr[i];
		     		}
		     		cout<<sum<<endl;
		     	}else{
		     		status=false;
		     		cout<<"Array is empty"<<endl;
		     	}
		     	break;
		     	
		     case 5:
		     	if(status==true){
		     		for(i=0;i<size;i++){
		     			if(arr[i]%2==0){
		     				cout<<arr[i]<<" is even"<<endl;
		     			}
		     			else{
		     				cout<<arr[i]<<" is odd"<<endl;
		     			}
		     		}
		     	}
		     	else{
		     		status=false;
		     		cout<<"Array is empty!"<<endl;
		     	}
		     	break;
		    
		    case 6:
		    	break;
		    	
		    default:
		    	cout<<"Invalid choice"<<endl;
				break;
		}
	}while(choice!=6);
	return 0;
}
