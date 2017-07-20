// Custom exception handler
// CAUTION: This program may cause your computer to freez

#include<iostream>
#include<conio.h>
#include<cstdlib>
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

void new_handler1() {
	cout<<"Exception Occured\n";
	abort();
}

void main() {
	int i;
	set_new_handler(new_handler1);
	STR s[50];
	for(i=0;i<50;i++) {
		s[i]=STR("Try this");
	}
	getch();
}
