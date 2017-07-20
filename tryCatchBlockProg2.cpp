// Try Catch block
// Throwing an exception

#include<iostream>
#include<conio.h>
using namespace std;

void div(float x,float y) {
	try{
		if(y==0)
			throw y;
	}
	catch(float) {
		cout<<"\nCaught Exception in div().\nRethrow Exception!\n";
		throw;
	}
}

void main() {
	float a,b;
	cout<<"To Divide a/b\n";
	cout<<"Enter the values of 'a' & 'b' respectively :\n";
	cin>>a>>b;
	try {
		div(a,b);
	}
	catch(float) {
		cout<<"\nCaught Exception in main().\nDivide by Zero ERROR!";
	}
	getch();
}