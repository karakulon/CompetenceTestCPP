#include <string>
#include "User.h"

using namespace std;

User::User(String^ _username, int _score, int _progress)
{
	username = _username;
	score = _score;
    progress = _progress;
}
void User::User::SaveScoreNS() 
{
    ofstream topScore;
    topScore.open("topScore.txt", std::ios::app);

    string str_username = "";

    for each (char letter in username)
    {
        str_username.push_back(letter);
    } 

    topScore << str_username + " Результат: " << score << endl;

    topScore.close();
}