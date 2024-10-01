#include<iostream>
#include<string>
#include<cstring>
int s;
using namespace std;
class Library{
 	string book_name[100];
 	int cabin[5];
 	int slot[10];
 	public:
 		void input()
 		{
 			for(int i=0;i<=5;i++)
 			{
 			cout<<"Enter the book name : ";
 			cin.ignore();
 			getline(cin,book_name[i]);
 			cout<<"Enter the cabin : ";
			cin>>cabin[i];
 			cout<<"Enter the slots : ";
			 cin>>slot[i];
			 break;
			 }
		 }
 	void display()
 	{
 		for(int i=0;i<=5;i++)
 		{
 		cout<<"The book name is : "<<book_name[i]<<endl;
 		cout<<"Cabin is : "<<cabin[i]<<endl;
 		cout<<"Slote is : "<<slot[i]<<endl;
 		break;
	    }
    }
};
int main()
{
	Library L;
	do{
	int choice;
	cout<<"1:- Press 1 to enter the input "<<endl;
	cout<<"2:- Press 2 to display "<<endl; 
	cin>>choice;
	switch(choice)
	{
		case 1:
			L.input();
			L.display();
		break;
		case 2:
			L.display();
		break;
		case 3:
		exit(0);
		break;
		default:
		 cout<<"Invalid";
		 break;
	}
	}while(true);
}
