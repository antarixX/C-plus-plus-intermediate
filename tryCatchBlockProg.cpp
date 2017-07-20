// Try Catch Block for 
// divide by 0 math error

#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	float a,b;
	cout<<"To Divide a/b\n";
	cout<<"Enter the values of 'a' & 'b' respectively :\n";
	cin>>a>>b;
	try{
		if(b==0)
			throw b;
		cout<<"Dvision : "<<(a/b);}
	
	catch(float) {
		cout<<"\nCaught Exception.\nDivide by Zero ERROR!";
	}
	getch();
}
