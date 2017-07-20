// Built-in functions to operate on strings

#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>

using namespace std;

int main() {
	int opt;
	string s1,s2;
	cout<<"\t\t\tString Operations\n"<<endl;
	do {
		cout<<"1.Concatination 2.Compare 3.Find substring 4.Find character 5.Swapping 6.Exit\n";
		cin>>opt;
		switch(opt) {
			
			case 1: {	
				cin.ignore();
				cout<<"Enter a string: ";
				getline(cin,s1);
				cout<<"Enter another string for concatination: ";
				getline(cin,s2);
				s1+=s2;
				cout<<"After concatination string: ";cout<<s1<<endl<<endl;
				break; 
			}
		    
		    case 2: {
				cin.ignore();
				cout<<"Enter the first string: ";
				getline(cin,s1);
				cout<<"Enter the second string: ";
				getline(cin,s2);
				int t=s1.compare(s2);
				if(t==0)
					cout<<"\nStrings are of same size\n\n";
				else if(t==1)
				cout<<"\nFirst string is longer\n\n";
				else if(t==-1)
				cout<<"\nSecond string is longer\n\n";
				break;
			}
		    
		    case 3: { 
			    cin.ignore();
			    int i,len;
				cout<<"Enter a string: ";
				getline(cin,s1);
	            cout<<"Enter the starting point of sub string: ";
				cin>>i;
				string s2= s1.substr(i,s1.length());
				cout<<"Substring: "<<s2<<endl<<endl;;
				break;
			}

		    case 4: {
				cin.ignore();
				cout<<"Enter a string: ";
				getline(cin,s1);
				cout<<"Enter a character: ";
				char c;
				cin>>c;
				int k;
				k=s1.find(c);
				(k!=NULL)?cout<<"'"<<c<<"'"<<" found at location "<<k<<endl<<endl:cout<<"'"<<c<<"'"<<" not found!"<<endl<<endl;
				break;
			 }
		    
		    case 5: {
				cin.ignore();
				cout<<"Enter the first string: ";
				getline(cin,s1);
				cout<<"Enter the second string: ";
				getline(cin,s2);
				cout<<"\nBefore swap:\ns1="<<s1<<"	s2="<<s2<<endl<<endl;
				s2.swap(s1);
				cout<<"After swap:\ns1="<<s1<<"	s2="<<s2<<endl<<endl;
				break;
			}

		    case 6:
			   exit(0);
		}

	} while(opt!=6);

	getch();
	return 0;	
}