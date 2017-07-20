// Bouble sort using function template
#include<iostream>
#include<conio.h>
using namespace std;

const int MAX=4;

template<class T>
void bubble_sort(T a[],int n) {
	T temp;
	int i,j;
	for(i=0;i<n;i++) {
		for(j=0;j<n-i-1;j++) {
	 		if(a[j]>a[j+1]) {
		  		temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	cout<<"\nSorted Array :	";
	for(i=0;i<4;i++)
		cout<<"	"<<a[i];
}

void main() {
	double aryd[MAX]={54.65,354.54,21.43,65.56};
	char aryc[MAX]={'g','w','k','a'};
	int aryi[MAX]={2,30,5,3};
	float aryf[MAX]={2.7,30.56,5.34,3.23};
	cout<<"Integer Array : ";
	for(int i=0;i<MAX;i++)
		cout<<"	"<<aryi[i];
	bubble_sort(aryi,MAX);
	cout<<"\nFloat Array :	";
	for(int i=0;i<MAX;i++)
		cout<<"	"<<aryf[i];
	bubble_sort(aryf,MAX);
	cout<<"\nCharacter Array :	";
	for(int i=0;i<MAX;i++)
		cout<<"	"<<aryc[i];
	bubble_sort(aryc,MAX);
	cout<<"\nDouble Array :	";
	for(int i=0;i<MAX;i++)
		cout<<"	"<<aryd[i];
	bubble_sort(aryd,MAX);
	getch();
}
