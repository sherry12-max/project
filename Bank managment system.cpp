#include<iostream>
using namespace std;
class bank{
	private:
		int balance;
	public:
		bank()
		{
			balance=0;
		}
		int getbalance()
		{
			return balance;
		}
	    void depositamount()
	    {
	    	int amount;
	    	cout<<"Enter the amount ";
	    	cin>>amount;
	    	if(amount>0)
	    	{
	    		balance+=amount;	
			}
			else
			{
				cout<<"Invalid "<<endl;
			}
	    }
	
    void withdrawAmount() {
        int amount;
        cout << "Enter the withdraw amount: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance." << endl;
        }
    }
		void display()
		{
			cout<<"Your Balance is : "<<balance<<endl;
		}
};
int main()
{
	bank b;
	int choice;
	do{
	cout<<"BANK MANAGMENT SYSTEM"<<endl;
	cout<<"1- ADD AMOUNT "<<endl;
	cout<<"2- WITHDRAW AMOUNT "<<endl;
	cout<<"3- CHECK BALANCE "<<endl;
	cout<<"4- Exit"<<endl;
	cout<<"Enter the choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			b.depositamount();
	    	break;
	    
		case 2:
			b.withdrawAmount();
		break;
		case 3:
			b.display();
		break;
		case 4:
			cout<<"Exit the program ";
			exit(0);
		break;
		default:
			cout<<"Invalid "<<endl;
		break;
	}
	}while (choice != 4);
	return 0;
}
