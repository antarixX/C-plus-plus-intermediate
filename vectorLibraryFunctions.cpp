// Built-in Vector library

#include<vector>
#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	vector<double> vec;
	cout<<"\t\tVECTOR\nPushimg Elements:\n2.3 4.6 6.7";
	vec.push_back(2.3);
	vec.push_back(4.6);
	vec.push_back(6.7);
	cout<<"\n\nPopping Elements:\n";
	while(!vec.empty()) {
		cout<<vec.back()<<' ';
		vec.pop_back();
	}
	getch();
}
