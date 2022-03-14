#include "Header.h"

using namespace std;

int getFBfollowers(string userInput, float Total);
int getTfollowers(string userInput, float Total);
int engagementScore(string userInput, float tfollowers);
void twitter(string userInput, float tfollowers, float tengagements);

float fb_percentage, twt_percentage, pasia_percentage, mnlbulletin_percentage, kalye_percentage, surveys_percentage;

int totalFBfollowers(string userInput){ //searching facebook database
 	ifstream ffollowers ( "database/facebookfollowers.txt" );
	
	string totalfollowers = "Total";
	string sum;
	string response;
	float total;
		
		while (getline(ffollowers, sum, '|')) {
		getline(ffollowers, response);
		if(totalfollowers == sum) {
			stringstream tf(response);
			tf >> total;
			getFBfollowers(userInput, total);
			ffollowers.close();
			return 1;
			}
		}

	// we couldn't find the phrase, so we'll need to go to the other function
	// After you are done with the file always close it.
	ffollowers.close();
	return 0;
}

int getFBfollowers(string userInput, float Total){ //searching facebook database
 	ifstream ffollowers ( "database/facebookfollowers.txt" );
	
	string name;
	string response;
	float followers;
	float fbresult;

		while (getline(ffollowers, name, '|')) {
		getline(ffollowers, response);
		if(userInput == name) {
			stringstream ff(response);
			ff >> followers;
		
			fbresult = (followers / Total) * 100;
			fb_percentage = fbresult * 0.15;
			cout << "Facebook: " << fbresult << "\t";
			
			ffollowers.close();
			return 1;
			system ("pause");
			}
		}

	ffollowers.close();
	return 0;
}

int totalTfollowers(string userInput){ //searching twitter followers database
 	ifstream tfollowers ( "database/twitterfollowers.txt" );
	
	string totalfollowers = "Total";
	string sum;
	string response;
	float total;
		
		while (getline(tfollowers, sum, '|')) {
		getline(tfollowers, response);
		if(totalfollowers == sum) {
			stringstream tf(response);
			tf >> total;
			getTfollowers(userInput, total);
			tfollowers.close();
			return 1;
			}
		}

	tfollowers.close();
	return 0;
}


int getTfollowers(string userInput, float Total){ //searching twitter followers database
 	ifstream tfollowers ( "database/twitterfollowers.txt" );
	
	string name;
	string response;
	float followers;
	float tresult;

		while (getline(tfollowers, name, '|')) {
		getline(tfollowers, response);
		if(userInput == name) {
			stringstream ff(response);
			ff >> followers;
		
			tresult = (followers / Total) * 100;
			cout << "Twitter Followers: " << tresult << "\t";
			engagementScore(userInput, tresult);
			tfollowers.close();
			return 1;
			system ("pause");
			}
		}

	tfollowers.close();
	return 0;
}

int engagementScore(string userInput, float tfollowers){ //searching twitter engagement database
 	ifstream tengagement ( "database/twitterengagement.txt" );
	
	string name;
	string response;
	int score;
		
		while (getline(tengagement, name, '|')) {
		getline(tengagement, response);
		if(userInput == name) {
			stringstream s(response);
			s >> score;
			cout << endl << "Twitter Engagement Score: " << score << "\t";
			twitter(userInput, tfollowers, score);
			tengagement.close();
			return 1;
			}
		}

	tengagement.close();
	return 0;
}

void twitter(string userInput, float tfollowers, float tengagements){ //combining twitter followers and twitter engagement score
	double twitterfinal;
	
	twitterfinal = (tfollowers * 0.50) + (tengagements * 0.50);
	cout << endl << "Twitter (Followers & Engagement Score): " << twitterfinal << "\t";
	twt_percentage = twitterfinal * 0.15;
}

int pulseasia(string userInput){ //searching pulse asia database
 	ifstream pasia ( "database/pulseasia.txt" );
	
	string name;
	string response;
	int score;
		
		while (getline(pasia, name, '|')) {
		getline(pasia, response);
		if(userInput == name) {
			stringstream s(response);
			s >> score;
			pasia_percentage = score * 0.40;
			cout << "Pulse Asia: " << score << "\t";
			pasia.close();
			return 1;
			}
		}

	pasia.close();
	return 0;
}

int mnlbulletinTWT(string userInput, float mnlfb);
int mnlbulletinWEB(string userInput, float mnlfb, float mnltwt);
void mnlbulletin(string userInput, float mnlfb, float mnltwt, float mnlweb);

int mnlbulletinFB(string userInput){ //searching manila bulletin's facebook database
 	ifstream mnlbulletinfb ( "database/mnlbulletin_fb.txt" );
	
	string name;
	string response;
	float mnl_fb;

		while (getline(mnlbulletinfb, name, '|')) {
		getline(mnlbulletinfb, response);
		if(userInput == name) {
			stringstream fb(response);
			fb >> mnl_fb;
			cout << "Manila Bulletin (Facebook): " << mnl_fb << "\t";
			mnlbulletinTWT(userInput, mnl_fb);
			mnlbulletinfb.close();
			return 1;
			system ("pause");
			}
		}

	mnlbulletinfb.close();
	return 0;
}

int mnlbulletinTWT(string userInput, float mnlfb){ //searching manila bulletin's twitter database
 	ifstream mnlbulletintwt ( "database/mnlbulletin_twt.txt" );
	
	string name;
	string response;
	float mnl_twt;

		while (getline(mnlbulletintwt, name, '|')) {
		getline(mnlbulletintwt, response);
		if(userInput == name) {
			stringstream twt(response);
			twt >> mnl_twt;
			cout << "\nManila Bulletin (Twitter): " << mnl_twt << "\t";
			mnlbulletinWEB(userInput, mnlfb, mnl_twt);
			mnlbulletintwt.close();
			return 1;
			system ("pause");
			}
		}

	mnlbulletintwt.close();
	return 0;
}

int mnlbulletinWEB(string userInput, float mnlfb, float mnltwt){ //searching manila bulletin's website database
 	ifstream mnlbulletinweb ( "database/mnlbulletin_web.txt" );
	
	string name;
	string response;
	float mnl_web;

		while (getline(mnlbulletinweb, name, '|')) {
		getline(mnlbulletinweb, response);
		if(userInput == name) {
			stringstream web(response);
			web >> mnl_web;
			cout << "\nManila Bulletin (Twitter): " << mnl_web << "\t";
			mnlbulletin(userInput, mnlfb, mnltwt, mnl_web);
			mnlbulletinweb.close();
			return 1;
			system ("pause");
			}
		}

	mnlbulletinweb.close();
	return 0;
}

void mnlbulletin(string userInput, float mnlfb, float mnltwt, float mnlweb){ //combining all polls of manila bulletin
	double mnlbulletinfinal;
	
	mnlbulletinfinal = (mnlfb * 0.50) + (mnltwt * 0.25) + (mnlweb * 0.25);
	cout << endl << "Manila Bulletin (Facebook, Twitter, & Website): " << mnlbulletinfinal << "\t";
	mnlbulletin_percentage = mnlbulletinfinal * 0.70;
}

int getKalye(string userInput, float Total);

int totalKalye(string userInput){ //searching kalye database
 	ifstream kalye ( "database/kalye.txt" );
	
	string totalkalye = "Total";
	string sum;
	string response;
	float total;
		
		while (getline(kalye, sum, '|')) {
		getline(kalye, response);
		if(totalkalye == sum) {
			stringstream tk(response);
			tk >> total;
			getKalye(userInput, total);
			kalye.close();
			return 1;
			}
		}
	kalye.close();
	return 0;
}

int getKalye(string userInput, float Total){ //searching kalye database
 	ifstream kalyepoll ( "database/kalye.txt" );
	
	string name;
	string response;
	float kalye;
	float kalye_result;

		while (getline(kalyepoll, name, '|')) {
		getline(kalyepoll, response);
		if(userInput == name) {
			stringstream k(response);
			k >> kalye;
		
			kalye_result = (kalye / Total) * 100;
			kalye_percentage = kalye_result * 0.30;
			surveys_percentage = (mnlbulletin_percentage + kalye_percentage) * 0.30;
			cout << "Kalye: " << kalye_result << "\t";
			
			kalyepoll.close();
			return 1;
			system ("pause");
			}
		}

	kalyepoll.close();
	return 0;
}

int OverallResult(){
	float finalResult = fb_percentage + twt_percentage + pasia_percentage + surveys_percentage;
	
	cout << "Overall result: " << finalResult << "\t";
	system ("pause");
	return 0;
}

