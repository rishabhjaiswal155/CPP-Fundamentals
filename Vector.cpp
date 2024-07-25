#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
	int ch;
	vector<int> myvect;
	cout<<"Menu----\n1.Add elements\n2.remove the elements\n3.display\n4.sum\n5.Average\n6.exit"<<endl;
	do{
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				{
				int el;
				cout<<"enter an element to vector"<<endl;
				cin>>el;
				myvect.push_back(el);
				cout<<"element added to vector"<<endl;
				break;
			    }
			case 2:
				{
				 myvect.pop_back();
				cout<<"Element removed"<<endl;
				break;
			}
			case 3:
			{
				int s=myvect.size();
				cout<<"Vector elements are:"<<endl;
				for(int i=0;i<s;i++){
					cout<<myvect[i]<<" ";
				}
				break;
		}
			case 4:
			{
			    int sum=accumulate(myvect.begin(),myvect.end(),0);
				cout<<"Sum of vector elements is "<<sum<<endl;
				break;
			}
			case 5:
			{
				double average=static_cast<double>(accumulate(myvect.begin(),myvect.end(),0)/myvect.size());
                cout<<"Average of Vector is:"<<average<<endl;
				break;				
		}
			case 6:
		{
		  cout<<"Exitting---"<<endl;
				break;
	}
		}
	}while(ch!=6);	
	return 0;
}
