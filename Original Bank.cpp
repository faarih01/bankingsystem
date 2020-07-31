
#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

class Bank
{
	char name[30];
	char accname[20];
	char acctype[20];
	float ibalance ;
	float depos;
	float with;
	int pass;
	float current_balance =0;
public:
	void menu(void);
	void getdata(void);
	void deposite(void);
	void checkbal(void);
	void withdraw(void);
	void info(void);
	void verifyUser(void);
};
void Bank::menu()
{
	int num;
	cout << "\n\n\n\t********************************";
	cout << "\n\t   Choose your Option:(1-to-6)\n" << endl;
	cout << "\t     1.Create An Account\n";
	cout << "\t     2.Deposite the Balance\n";
	cout << "\t     3.Check the Balance\n";
	cout << "\t     4.Withdraw the Balance\n";
	cout << "\t     5.See All Information\n";
	cout << "\t     6.Quit";
	cout << "\n\t********************************";
	cout << "\t\n\t"; cin >> num;
	switch (num)
	{
	case 1:
		getdata();
		break;

	case 2:
		
		verifyUser();
		deposite();
		break;

	case 3:
		verifyUser();
		checkbal();
		break;

	case 4:
		verifyUser();
		withdraw();
		break;

	case 5:
		verifyUser();
		info();
		break;

	default:
		break;
	}

}

void Bank::getdata()
{
	int go;
	cout << "\n\t\tEnter the Name of Depositer:";
	cin >> name;
	cout << "\n\t\tChoose The Account Name:";
	cin >> accname;
	cout << "\n\t\tWhich types of Account You wanna Create?\n";
	cout << "\t\t\t\t*Saving\n";
	cout << "\t\t\t\t*\n";
	cout << "\t\t\t\t*\n";
	cout << "\t\n\t"; cin >> acctype;
	cout << "\n\t\tDeposite the Initial Balance:";
	cin >> ibalance;
	Bank  ::current_balance = ibalance;
	cout << "\n\t\tChoose your password[0-9] for secure (only 4 nos.):";
	cin >> pass;
	cout << "\n\n\t\tAccount Has Been Successfully Created!!!\n\n";
	cout << "\n\t\tHit \'0\' for Go to MainMenu:";
	cin >> go;
	if (go == 0)
	{
		menu();
	}
}

void Bank::deposite()
{
	int go;
	cout << "\n\t\tHow Much Money You wanna Deposite:\t";
	cin >> depos;
	Bank ::current_balance = current_balance + depos;
	cout << "\n\n\t\tYour Balance Has Been Successfully Deposite!!!\n\n";

	cout << "\n\t\tHit \'0\' for Go to MainMenu:";
	cin >> go;
	if (go == 0)
	{
		menu();
	}
}

void Bank::checkbal()
{	
	
	int go;
	cout << "\n\t\tYour Current Balance:" << " RF." << current_balance << "\n";
	cout << "\n\t\tHit \'0\' for Go to MainMenu:";
	cin >> go;
	if (go == 0)
	{
		menu();
	}
}

void Bank::withdraw()
{
		int go;
		cout << "\n\t\tHow Much Money You wanna Withdraw:";
		cin >> with;
		Bank  ::current_balance = current_balance - with;
		cout << "\n\t\tAfter Withdraw Your Balance:" << " Rs." << depos << "\n";
		cout << "\n\t\tHit \'0\' for Go to MainMenu:";
		cin >> go;
		if (go == 0)
		{
			menu();
		}
	}
	

void Bank::info()
{	
		int go;
		cout << "\n\t\tAll Information is Listed Below:\n";
		cout << "\t\t\tName of the Depositer:" << name << "\n";
		cout << "\t\t\tName of the Account:" << accname << "\n";
		cout << "\t\t\tType of the Account:" << acctype << "\n";
		cout << "\t\t\tYour Current Amount:" << current_balance << "\n";
		cout << "\n\t\tHit \'0\' for Go to MainMenu:";
		cin >> go;
		if (go == 0)
		{
			menu();
		}
	}
	

void Bank :: verifyUser() {
	int tempPin;
	cout << "Enter your accounts pin\n";
	cin >> tempPin;
	
	if (tempPin == pass) {
		cout << "Enjoy your our service\n";	
	}
	else {
		do{
			cout << "Invalid Pind : Enter your accounts pin again\n";
			cin >> tempPin;
			if (tempPin == pass) {
				cout << "Enjoy your our service\n";
			}
			else {
				cout << "Incorrect Pin\n";
				menu();
			}
		} while (tempPin != pass);
		{
			cout << "Enjoy your our service\n";
		}
	}
}






int main()
{
	Bank Obj;
	Obj.menu();
	
	_getch();
	return 0;
}
