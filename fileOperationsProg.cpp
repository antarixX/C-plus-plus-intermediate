// If the text file does not get created
// then create it in the same directory as the program 

#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

void main() {
	int act_no;
	string name;
	double balance;
	
	ofstream fo("a.txt",ios::out);
	if(!fo) {
		cout<<"Cannot Open file!"<<endl;
		exit(1);
	}

	cout<<"\nEnter account number; name and balance respectively:	"<<endl;

	while(cin>>act_no>>name>>balance) {
		fo<<act_no<<"	"<<name<<"	"<<balance<<endl;
	}

	fo.close();
	ifstream fi("a.txt",ios::in);
	if(!fi) {
		cout<<"Cannot Open file!"<<endl;
		exit(1);
	}

	cout<<left<<setw(10)<<"Account"<<setw(13)<<"Name"<<setw(7)<<right<<"Balance"<<endl;
	
	while(fi>>act_no>>name>>balance) {
		cout<<left<<setw(10)<<act_no<<setw(13)<<name<<setw(7)<<showpoint<<right<<balance<<endl;
	}

	fi.close();
	getch();
}