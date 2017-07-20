// Celsius - Fahrenheit
// Temperature value table 

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void main() {
	int f;
	float c;
	cout<<setw(10);
	cout<<"Fahrenheit";
	cout<<"	|";
	cout<<setw(10);
	cout<<"Celsius"<<endl;
	for(f=0;f<=212;f++) {
		c=(5.0/9.0)*((float)f-32.0);
		cout.width(10);
		cout<<noshowpos<<f;
		cout.precision(3);
		cout.setf(ios::showpos);
		cout.setf(ios::right);
		cout<<"	|";
		cout.width(10);
		cout<<c<<endl;
	}
	getch();
}
