#include<iostream>
#include<bits/stdc++.h>
#include<type_traits>
using namespace std;
template <typename T>
void printValue(T value){
	if constexpr (is_integral::value){
		cout<<"Value is integer"<<endl;
	}
	else if constexpr (is_floating_point::value){
		cout<<"value is floating point"<<endl;
	}
	else{
		cout<<"Other value"<<endl;
	}
}
int main(){
	printValue(23);
	printValue(23.95f);
	printValue(23.659);
	printValue('A');
	return 0;
}
