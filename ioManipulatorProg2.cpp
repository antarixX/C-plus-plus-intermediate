#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;

class list {
	string book_detail;
	int code;
	float cost;
public:
		
	void get() {
		cout<<"Enter book name"<<endl;
		getline(cin,book_detail);
		cout<<"Enter book code"<<endl;
		cin>>code;
		cout<<"Enter the cost of the book"<<endl;
		cin>>cost;
		cin.ignore();	
	}

	void show() {
		cout.precision(2);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout<<book_detail<<"\t"<<code<<"\t\t"<<cost<<endl;
	}
};

void print() {
	for(int i=0;i<=50;i++) {
		cout<<"_";
	}
	cout<<endl;
}

void main() {
	list l[2];
	for(int i=0;i<2;i++) {
		l[i].get();
	}
	print();
	cout<<"NAME\t\tCODE\t\tCOST"<<endl;
	print();
	for(int i=0;i<2;i++) {
		l[i].show();
	}
	getch();
}
