#include "Header.h"

using namespace std;

void error_check(int answer){
	if (isdigit(answer)==false){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

void error()
{
	cout << "\n[Bot]: Unfortunately, eBot can't understand your answer :( Please retry and input the corresponding number of your choice. Thank you!";
}
