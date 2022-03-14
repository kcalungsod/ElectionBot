#include "Header.h"

using namespace std;

void mainmenu();

void goodbye(){

	cout << "[Bot]: Goodbye! I hope that was informative! \n"; 
	cout << "\t\t\t        _____________________\n";
	cout << "\t\t\t       | ___________________ |\n";
	cout << "\t\t\t       ||   _           _   ||\n";
	cout << "\t\t\t       ||  | |         | |  ||\n"; 
	cout << "\t\t\t       ||      _______      ||\n";  
	cout << "\t\t\t       ||     |_|_|_|_|     ||\n";
	cout << "\t\t\t       ||___________________||\n";
	cout << "\t\t\t       |_____________________|\n";
	cout << "\t\t\t              _|     |_\n";
	cout << "\t\t\t             |_________|\n";
	cout << "____________________________________________________________________________________\n";
	
	system("pause");
	exit(0);
}

int main (){
	
	system ("title Election Bot");
	
	string username;
	
	cout << "\t\t\t\t  WELCOME TO eBot\n";
	cout << "\t\t\t        _____________________\n";
	cout << "\t\t\t       | ___________________ |\n";
	cout << "\t\t\t       ||                   ||\n";
	cout << "\t\t\t       ||  [.]         [.]  ||\n";
	cout << "\t\t\t       ||                   ||\n";
	cout << "\t\t\t       ||     |_______|     ||\n";
	cout << "\t\t\t       ||___________________||\n";
	cout << "\t\t\t       |_____________________|\n";
	cout << "\t\t\t              _|     |_\n";
	cout << "\t\t\t             |_________|\n";
	cout << "____________________________________________________________________________________\n\n";
	cout << "[Bot]: Hello, I am Election Bot (eBot) - your Presidential Election Prediction bot.\n"; 
	system("pause");
	mainmenu();
	return(0);
}
