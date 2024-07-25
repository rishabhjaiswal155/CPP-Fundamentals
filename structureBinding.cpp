#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Point{
	int x,y;
};
int main(){
	Point p={1,3};
	auto [ x_coordinate,y_coordinate ]=p;
	auto [ n1,n2 ]=p;
	cout<<"X-cordinate= "<<x_coordinate<<endl;
	cout<<"Y-cordinate= "<<y_coordinate<<endl;
	return 0;
}

