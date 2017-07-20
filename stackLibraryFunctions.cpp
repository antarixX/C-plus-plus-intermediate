// Built-in Stack library

#include<stack>
#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	stack<double> values;
	cout<<"		STACK"<<endl;
	cout<<"Pushing values:\n1.2 3.6 4.5";
	values.push(1.2);
	values.push(3.6);
	values.push(4.5);
	cout<<"\n\nPopping values:"<<endl;
	values._Get_container();
	while(!values.empty()) {
		cout<<values.top()<<'\n';
		values.pop();
	}
	getch();
}
