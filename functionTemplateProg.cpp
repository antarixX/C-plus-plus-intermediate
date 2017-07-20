// Swapping using function template

#include<iostream>
#include<conio.h>
using namespace std;

template<class T>
void swapt(T&x ,T&y) {  
	   T temp=x;
	   x=y;
	   y=temp;
}

void main() {
	char p='a', q='b';
	int a=5,b=6;
	float c=5.6,d=11.2;
	cout<<"before swap a="<<a<<" b="<<b<<endl;
	swapt(a,b);
	cout<<"after swap a="<<a<<" b="<<b<<endl;
	cout<<"before swap p="<<p<<" q="<<q<<endl;
	swapt(p,q);
	cout<<"after swap p="<<p<<" q="<<q<<endl;
	cout<<"before swap c="<<c<<" d="<<d<<endl;
	swapt(c,d);
	cout<<"after swap c="<<c<<" d="<<d<<endl;
	getch();
}
