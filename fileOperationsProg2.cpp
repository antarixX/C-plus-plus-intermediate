// If the text file does not get created
// then create it in the same directory as the program 

#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

class emp {
	char name[20];
	char add[20];
	char des[20];
	double sal;
public:
	char* getname() {
		return name;
	}

	void getdata() {
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Address: ";
		cin>>add;
		cout<<"Enter Designation: ";
		cin>>des;
		cout<<"Enter Salary: ";
		cin>>sal;
	}

	void print() {
		cout<<setw(10)<<name;
		cout<<setw(20)<<add;
		cout<<setw(20)<<des;
		cout<<setw(20)<<sal<<endl;
	}

	void update(double n,char *t,char *d) {
		sal=n;
		strcpy(add,t);
		strcpy(des,d);
	}

};

int main() {
	emp e1;fstream file;
	file.open("new.bin",ios::in|ios::ate|ios::binary|ios::out);
	double es;
	int ch,fnd=0;
	char nm[20],c;
	cout<<"\t\t\t\tEMPLOYEE DETAILS";
	do {
		cout<<"\nSelect one of the following options:\n1.Insert\t2.Display\t3.Search\t4.Update\t5.Exit\n";
		cin>>ch;
		switch(ch) {
			case 1: {
				e1.getdata();
				file.write((char*)&e1,sizeof(e1));
				file.clear();
				break;
			}

			case 2: {
				file.seekg(0,ios::beg);
				cout<<endl<<setw(10)<<"Name";
				cout<<setw(20)<<"Address";
				cout<<setw(20)<<"Designation";
				cout<<setw(20)<<"Salary"<<endl;
				while(file) {
					file.read((char*)&e1,sizeof(e1));
					if(!file.eof())
						e1.print();
				}
				file.clear();
				break;
			}

			case 3: {
				cout<<"Enter the Name: ";
				cin>>nm;
				file.seekg(0,ios::beg);
				fnd=0;
				while(file.read((char*)&e1,sizeof(e1))) {
					if(strcmp(nm,e1.getname())==0) {
						fnd=1;
						e1.print();
					}
					file.clear();
				}
				if(fnd==0)
					cout<<"Record not found";
				file.clear();
				getch();
				break;
			}

			case 4: {
				cout<<"Enter Name: ";
				cin>>nm;
				file.seekg(0,ios::beg);
				fnd=0;
				int cnt=0;
				while(file.read((char*)&e1,sizeof(e1))) {
					cnt++;
					if(strcmp(nm,e1.getname())==0) {
						fnd=1;break;
					}
				}

				file.clear();
				if(fnd==0)
					cout<<"Record Not found\n";
				else {
					int location=(cnt-1)*sizeof(e1);
					cin.get(c);
					if(file.eof())
						file.clear();
					char ad[20],d[20];
					double s;
					cout<<"Enter new address: ";
					cin>>ad;
					cout<<"Enter new Designation: ";
					cin>>d;
					cout<<"Enter new salary: ";
					cin>>s;
					file.seekp(location);
					e1.update(s,ad,d);
					file.write((char*)&e1,sizeof(e1));
					file.flush();
				}
				file.clear();
				break;
			}

			case 5:
				break;

			default:
				cout<<"Enter a vaid option!"<<endl;
		}
	} while(ch!=5);
	getch();
	return 0;
}