#include "Header.h"

using namespace std;

void error_check(int answer);
void error();
void mainmenu();
void candidates();
void goodbye();
int totalFBfollowers(string userInput);
int getTfollowers(string userInput, float Total);
int totalTfollowers(string userInput);
int pulseasia(string userInput);
int mnlbulletinFB(string userInput);
int totalKalye(string userInput);
int OverallResult();

void abella()
{
	cout << endl << "[Bot]: About ABELLA,Ernesto" << endl;
	string name = "Abella";
	cout << "Name: Ernesto 'Ernie' Corpuz Abella" <<endl;
	cout << "Party List: Independent" <<endl;
	cout << "Facebook Followers: 1,800" <<endl;
	cout << "Twitter Followers: 739 [Fake Followers: 33.7% (HIGH)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	cout << "Pulse Asia: Not Included\t";
	system ("pause");
	cout << endl << "Fourth Category\n";
	cout << "Manila Bulletin: Not Included\t";
	system ("pause");
	cout << endl << "Fifth Category\n";
	cout << "Kalye: Not Included\t";
	system ("pause");
}

void de_guzman()
{
	cout << endl << "[Bot]: DE GUZMAN, Leody" << endl;
	string name = "De Guzman";
	cout << "Name: Leody de Guzman" <<endl;
	cout << "Party List: Partido Lakas ng Masa (PLM))" <<endl;
	cout << "Facebook Followers: 14,349" <<endl;
	cout << "Twitter Followers: 16,823 [Fake Followers: 5.6% (LOW)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	cout << "Pulse Asia: Not Included\t";
	system ("pause");
	cout << endl << "Fourth Category\n";
	cout << "Manila Bulletin: Not Included\t";
	system ("pause");
	cout << endl << "Fifth Category\n";
	cout << "Kalye: Not Included\t";
	system ("pause");
}

void dela_rosa()
{
	cout << endl << "[Bot]: About DELA ROSA, Ronald" << endl;
	string name = "Dela Rosa";
	cout << "Name: Ronald 'Bato' Dela Rosa" <<endl;
	cout << "Party List: PDP-Laban" <<endl;
	cout << "Facebook Followers: 146,348" <<endl;
	cout << "Twitter Followers: No Twitter Account" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	cout << "Twitter: No Account\t";
	system ("pause");
	cout << endl << "Third Category\n";
	cout << "Pulse Asia: Not Included\t";
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
}

void domagoso()
{
	cout << endl << "[Bot]: About DOMAGOSO, Francisco" << endl;
	string name = "Domagoso";
	cout << "Name: Francisco 'Isko' Moreno Domagoso" <<endl;
	cout << "Party List: Aksyon Demokratiko" <<endl;
	cout << "Facebook Followers: 5,400,060" <<endl;
	cout << "Twitter Followers: 534,979 [Fake Followers: 37.6% (HIGH)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
	cout << endl << "Sixth Category\n";
	OverallResult();
}

void duterte_carpio()
{
	cout << endl << "[Bot]: About DUTERTE-CARPIO, Sara" << endl;
	string name = "Duterte-Carpio";
	cout << "Name: Sara Zimmerman Duterte-Carpio" <<endl;
	cout << "Facebook Followers: 408,191" <<endl;
	cout << "Twitter Followers: No Twitter Account" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	cout << "Twitter: No Account\t";
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	cout << "Manila Bulletin: Not Included\t";
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
}

void gonzales()
{
	cout << endl << "[Bot]: About GONZALES, Norberto" << endl;
	string name = "Gonzales";
	cout << "Name: Norberto B. Gonzales" <<endl;
	cout << "Party List: Demokratiko Sosyalista" <<endl;
	cout << "Facebook Followers: 693" <<endl;
	cout << "Twitter Followers: No Account" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	cout << "Twitter: No Account\t";
	system ("pause");
	cout << endl << "Third Category\n";
	cout << "Pulse Asia: Not Included\t";
	system ("pause");
	cout << endl << "Fourth Category\n";
	cout << "Manila Bulletin: Not Included\t";
	system ("pause");
	cout << endl << "Fifth Category\n";
	cout << "Kalye: Not Included\t";
	system ("pause");
}

void lacson()
{
	cout << endl << "[Bot]: About LACSON, Panfilo" << endl;
	string name = "Lacson";
	cout << "Name: Panfilo 'Ping' Lacson" <<endl;
	cout << "Party List: Partido Reporma" <<endl;
	cout << "Facebook Followers: 369,226" <<endl;
	cout << "Twitter Followers: 44,139 [Fake Followers: 37.5% (HIGH)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
	cout << endl << "Sixth Category\n";
	OverallResult();
}

void marcos()
{
	cout << endl << "[Bot]: About MARCOS, Ferdinand Jr." << endl;
	string name = "Marcos";
	cout << "Name: Ferdinand 'Bongbong' Marcos Jr." <<endl;
	cout << "Party List: Partido Federal ng Pilipinas (PFP)" <<endl;
	cout << "Facebook Followers: 3,676,633" <<endl;
	cout << "Twitter Followers: 920,854 [Fake Followers: 47.4% (HIGH)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
	cout << endl << "Sixth Category\n";
	OverallResult();
}

void pacquiao()
{
	cout << endl << "[Bot]: About PACQUIAO,  Emmanuel" << endl;
	string name = "Pacquiao";
	cout << "Name: Emmanuel Dapidran Pacquiao" <<endl;
	cout << "Facebook Followers: 18,389,790" <<endl;
	cout << "Twitter Followers: 2,682,393 [Fake Followers: 32.6% (LOW)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
	cout << endl << "Sixth Category\n";
	OverallResult();
}

void poe()
{
	cout << endl << "[Bot]: About POE, Grace" << endl;
	string name = "Poe";
	cout << "Name: Mary Grace Natividad Sonora Poe-Llamanzares" <<endl;
	cout << "Facebook Followers: 3,276,680" <<endl;
	cout << "Twitter Followers: 137,407 [Fake Followers: 54.6% (HIGH)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	cout << "Manila Bulletin: Not Included\t";
	system ("pause");
	cout << endl << "Fifth Category\n";
	cout << "Kalye: Not Included\t";
	system ("pause");
}

void robredo()
{
	cout << endl << "[Bot]: About ROBREDO, Maria Leonor" << endl;
	string name = "Robredo";
	cout << "Name: Maria Leonor 'Leni' Gerona Robredo" <<endl;
	cout << "Party List: Independent" <<endl;
	cout << "Facebook Followers: 1,626,425" <<endl;
	cout << "Twitter Followers: 600,858 [Fake Followers: 13.4% (LOW)]" <<endl;
	system("pause");
	cout << endl << "CHANCES OF WINNING";
	cout << endl << "First Category\n";
	totalFBfollowers(name);
	system ("pause");
	cout << endl << "Second Category\n";
	totalTfollowers(name);
	system ("pause");
	cout << endl << "Third Category\n";
	pulseasia(name);
	system ("pause");
	cout << endl << "Fourth Category\n";
	mnlbulletinFB(name);
	system ("pause");
	cout << endl << "Fifth Category\n";
	totalKalye(name);
	system ("pause");
	cout << endl << "Sixth Category\n";
	OverallResult();
}

void candidates()
{
	int answer;
	CANDIDATES:
		cout << "\n[Bot]: Please choose a presidential candidate." << endl;
		cout << "(1) ABELLA,Ernesto\n(2) DE GUZMAN, Leody\n(3) DELA ROSA, Ronald\n(4) DOMAGOSO, Francisco\n(5) DUTERTE-CARPIO, Sara\n(6) GONZALES, Norberto\n(7) LACSON, Panfilo\n(8) MARCOS, Ferdinand Jr.\n(9) PACQUIAO,  Emmanuel\n(10) POE, Grace\n(11) ROBREDO, Maria Leonor\n(12) Back\n(13) Exit" <<endl;
		cout << "[User]: ";
		cin >> answer;
		error_check(answer);
		switch (answer)
		{
			case 1:
				abella();
				break;
			case 2:
				de_guzman();
				break;
			case 3:
				dela_rosa();
				break;
			case 4:
				domagoso();
				break;
			case 5:
				duterte_carpio();
				break;
			case 6:
				gonzales();
				break;
			case 7:
				lacson();
				break;
			case 8:
				marcos();
				break;
			case 9:
				pacquiao();
				break;
			case 10:
				poe();
				break;
			case 11:
				robredo();
				break;
			case 12:
				candidates();
				break;
			case 13:
				goodbye();
				exit(0);
				break;
			default:
				error();
				goto CANDIDATES;
		}
}
