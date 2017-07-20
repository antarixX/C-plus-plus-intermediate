// Class template
// Generic stack data structure

#include<iostream>
#include<conio.h>
using namespace std;

const int MAX=5;

template <class T>
class stacks {
private:
	T arr[MAX];
	int top;
public:
	
	stacks() {
		top=-1;
	}

	void push(T item);
	void pop();
	void display();
};

template<class T>
void stacks<T> :: pop() {
	T data;
	if(top==-1) {
		cout<<"\nStack is EMPTY!\n";
		return;
	}
	data=arr[top];
	top--;
	cout<<"Popped item is : "<<data<<endl;
}

template<class T>
void stacks<T> :: push(T item) {
	if(top==(MAX-1)) {
		cout<<"\nStack is FULL!\n";
		return;
	}
	top++;
	(arr[top])=item;
}

template<class T>
void stacks<T> :: display() {
	int i;
	cout<<"\nStack : \n";
	for(i=top;i>-1;i--)
		cout<<(arr[i])<<endl;
}

void main() {
	stacks<int> is;
	stacks<float> fs;
	stacks<char> cs;
	cout<<"Integer STACK :\n";
	cout<<"\nPush 10\n";is.push(10);
	cout<<"Push 20\n";is.push(20);
	cout<<"Push 30\n";is.push(30);
	cout<<"Push 40\n";is.push(40);
	is.display();
	cout<<"\nFloat STACK :\n";
	cout<<"\nPush 1.4\n";fs.push(1.4);
	cout<<"Push 2.34\n";fs.push(2.34);
	cout<<"Push 4.6\n";fs.push(4.6);
	cout<<"Push 7.65\n";fs.push(7.65);
	fs.display();
	cout<<"\nCharacter STACK :\n";
	cout<<"\nPush a\n";cs.push('a');
	cout<<"Push e\n";cs.push('e');
	cout<<"Push i\n";cs.push('i');
	cout<<"Push m\n";cs.push('m');
	cs.display();
	getch();
}
