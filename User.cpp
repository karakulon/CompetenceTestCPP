#include "User.h"

using namespace std;

User::User(String^ _nickname, int _score, int _progress)
{
	nickname = _nickname;
	score = _score;
    progress = _progress;
}
void User::User::SaveScoreNS() 
{
    ofstream topScore;
    topScore.open("topScore.txt", std::ios::app);
    topScore << nickname[0] << endl;
    topScore << score << endl;
    topScore.close();
}