// Built-in Queue library

#include<queue>
#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	queue<double> values;
	cout<<"			QUEUES"<<endl;
	cout<<"Pushing values:\n1.2	3.6	4.5";
	values.push(1.2);
	values.push(3.6);
	values.push(4.5);
	cout<<"\n\nPopping values:"<<endl;
	while(!values.empty()) {
		cout<<values.front()<<' ';
		values.pop();
	}
	getch();
}
