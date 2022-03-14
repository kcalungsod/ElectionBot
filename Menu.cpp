#include "Header.h"

using namespace std;

void error_check(int answer);
void error();
void goodbye();
void candidates();
void surveys();

void help ()
{
	cout << "\n[Bot]: Election Bot (eBot) is a logical chatbot that allows you to view the different presidential candidates and their chances of winning the 2022 National Elections." <<endl;
	system ("pause");
	cout << "\n[Bot]: If you want to view the different presidential candidates, please enter 1." <<endl;
	system ("pause");
	cout << "\n[Bot]: If you want to view the different presidential surveys and polls, please enter 2." <<endl;
	system ("pause");
	cout << "\n[Bot]: If you want to exit, please enter 4." <<endl;
	system ("pause");
	cout << "\nBot: In general, you just need to enter the number corresponding to choices available unless it's stated otherwise! ";
	system ("pause");
}

void mainmenu()
{ 
	int answer, choice;
	MENU:
		cout << "\n[Bot]: How may I help you today? Please input the number corresponding to your choice!";
		cout << "\n(1) Presidential Candidates\n(2) Presidential Surveys and Polls\n(3) Help\n(4) Exit" << endl; 
		cout << "[User]: "; cin >> answer; 
	
	error_check(answer);		
	switch (answer)
	{
		case 1:
		    candidates();
			goto MENU;
			break;
		case 2:
			surveys();
			goto MENU;
			break;
		case 3:
			help();
			goto MENU;
			break;
		case 4:
			goodbye();
			exit(0);
			break;
		default:
			error();
			goto MENU;
	}
}

