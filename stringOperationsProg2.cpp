// String Stream Operations

#include<conio.h>
#include<string>
#include<iostream>
#include<sstream>
using namespace std;

int main() {
	string emp("Jaz 1513 45000.500 Manager Margao");
	istringstream inputstring(emp);
	string s1,s2,s3,s4,s5,s6;
	int i,i1;
	double d,d1;
	inputstring>>s1>>i>>d>>s2>>s3;
	cout<<"Emp Name: "<<s1<<endl;
	cout<<"Emp Id: "<<i<<endl;
	cout<<"Emp Salary: "<<d<<endl;
	cout<<"Emp Designation: "<<s2<<endl;
	cout<<"Emp Address: "<<s3<<endl;
	stringstream outputstring;
	cout<<"\nEnter Name:";cin>>s1;outputstring<<s1<<' ';
	cout<<"Enter Id:";cin>>i;outputstring<<i<<' ';
	cout<<"Enter Salary:";cin>>d;outputstring<<d<<' ';
	cout<<"Enter Designation:";cin>>s2;outputstring<<s2<<' ';
	cout<<"Enter Address:";cin>>s3;outputstring<<s3<<' ';
	outputstring>>s4>>i1>>d1>>s5>>s6;
	cout<<endl<<s4<<' '<<i1<<' '<<d1<<' '<<s5<<' '<<s6;
	getch();
	return 0;
}
