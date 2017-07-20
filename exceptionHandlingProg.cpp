// Built-in exception handler
// CAUTION: This program may cause your computer to freez

#include<iostream>
#include<conio.h>
#include<exception>
using namespace std;

class STR {
	char*name;
public:
	STR(){}
	STR(char*p) {
		name=new char[50000000];
		strcpy(name,p);
	}
};

void main() {
	int i;
	STR s[50];
	try {
		for(i=0;i<50;i++) {
			s[i]=STR("Try this");}
	} catch(bad_alloc &a) {	
		cout<<"Exception Occured\n"<<a.what();
	}
	getch();
}
