#include <iostream>
#include <string>
#include <iomanip>
#include "Input_Validation_Extended.h"

using namespace std;

class Team
  {
  private:
    int score;
    bool homeStatus;
    string name;
    string coachName;
    string cityName;
    int timeoutCount;
  public:
    //default constructor
    Team()
    {
      score = 0;
      homeStatus = false; //visitor = false, home = true
      name = "Default Name";
      coachName = "Coach Name";
      cityName = "City Name";
      timeoutCount = 0;
    }
    void setScore(int s) { score = s; }
    
    void setHomeStatus(bool hs) { homeStatus = hs; }
    
    void setName(string n) { name = n; }
    
    void setCoachName(string coach) { coachName = coach; }
    
    void setCityName(string city) {cityName = city;}
    
    void setTimeoutCount(int timeout) {timeoutCount = timeout;}
    
    int getScore() const { return score; }
    
    bool getHomeStatus() const { return homeStatus; }
    
    string getName() const { return name; }
    
    string getCoachName() const { return coachName;}
    
    string getCityName() const {return cityName;}
    
    int  getTimeoutCount() const {return timeoutCount;}
    


  };


class Scoreboard
  {
  private:
    int half;
    Team home; //object as a member of another object
    Team visitor; //object as a member of another object
  public:
    //default constructor
    Scoreboard()
    {
      half = 1;
    }

    void setHalf(int h) { half = h; }
    void setHome(Team hSet) { home = hSet; }
    void setVisitor(Team vSet) { visitor = vSet; }
    int getHalf() const { return half; }
    Team getHome() const { return home; }
    Team getVisitor() const { return visitor; }
    void showScoreboard() 
    {
      cout << "\t\t" << "Football Scoreboard" << endl;
      cout << fixed << left << setw(11) << home.getName() << "\t\t" << fixed << right << setw(11) << visitor.getName() << endl;

      cout << fixed << setw(11) << left << home.getCityName() << "\t\t\t" << fixed << right << setw(11) << visitor.getCityName() << endl;

      cout << fixed << left << setw(11) << home.getCoachName() << "\t\t\t" << fixed << right << setw(11) << visitor.getCoachName() << endl << endl;

      cout << "\t" << home.getTimeoutCount()<< "\t\t" << "Timeouts" << "\t\t" << visitor.getTimeoutCount() << endl << endl;

      cout << "  " << "Score" << "\t\t\t\t\t  " << "Score" << endl << endl;

      cout << "\t" << home.getScore() << "\t\t\t\t\t\t" << visitor.getScore() << endl;
    }
  }; 

//prototypes outside of classes
void scoreBoardMenu();

//Definitions outside of classes

void scoreBoardMenu()
{
  Scoreboard s;
	Team tOne;
	Team tTwo;
	string homeName;
	string userChoice;
	int homeScore;
  string homeCity;
  string homeCoach;
  int homeTimeouts;
  string visitName;
  int visitScore;
  string visitCity;
  string visitCoach;
  int visitTimeouts;

  
  do
	{
		system("clear"); // clear the screen of previous content
		
		s.showScoreboard(); //show current scoreboard stats (default)

		cout << "Please make a selection: " << endl;

    //showMenu();
		//menu choices
		cout << "A = Update Home Team Name" << endl;
		cout << "B = Update Home Team Score" << endl;
    cout << "C = Update Home Team City Name" << endl;
    cout << "D = Update Home Team Coach Name" << endl;
    cout << "E = Update Home Team Timeouts" << endl;
    cout << "F = Update Visitor Team Name" << endl;
    cout << "G = Update Visitor Score" << endl;
    cout << "H = Update Visitor City" << endl;
    cout << "I = Update Visitor Coach" << endl;
    cout << "J = Update Visitor Timeouts" << endl;
		cout << "Exit = end program" << endl;
    cout << ">";
		userChoice = validateString(userChoice);
		
		if (userChoice == "A" || userChoice == "a")
		{
			//accept a new name for s's home team
			cout << "***Update Home Team Name Module***" << endl;
			cout << "Please enter a new name for the Home Team: ";
			cin >> homeName;
			tOne.setName(homeName);
			//need to refresh the data for s
		}
		else if (userChoice == "B" || userChoice == "b")
		{
			cout << "***Update Home Team Score Module***" << endl;
			cout << "Please enter the score for the Home Team: ";
			cin >> homeScore;
			tOne.setScore(homeScore);

		}
    	else if (userChoice == "C" || userChoice == "c")
		{
			cout << "***Update Home Team City Module***" << endl;
			cout << "Please enter the City for the Home Team: ";
			 homeCity=validateString(homeCity);
      
			tOne.setCityName(homeCity);

		}
    else if (userChoice == "D" || userChoice == "d")
		{
			cout << "***Update Home Team Coach Name Module***" << endl;
			cout << "Please enter the Coach for the Home Team: ";
			 homeCity=validateString(homeCoach);
      
			tOne.setCoachName(homeCoach);

		}
    else if (userChoice == "E" || userChoice == "e")
		{
			cout << "***Update Home Team Timeouts Module***" << endl;
			cout << "Please enter the Number of Timeouts for the Home Team: ";
			 //homeTimeouts=validateInt(homeTimeouts);
      cin >> homeTimeouts;
			tOne.setTimeoutCount(homeTimeouts);

		}
		else if (userChoice == "F" || userChoice == "f")
		{
			cout << "***Update Visitor Team Name Module***" << endl;
			cout << "Please enter the Name of the Visitor Team: ";
      visitName=validateString(visitName);
      //cin >> visitName;
			tTwo.setName(visitName);

		}
    else if (userChoice == "G" || userChoice == "g")
		{
			cout << "***Update Visitor Team Score Module***" << endl;
			cout << "Please enter the Score of the Visitor Team: ";
      visitScore=validateInt(visitScore);
			tTwo.setScore(visitScore);

		}
    else if (userChoice == "H" || userChoice == "h")
		{
			cout << "***Update Visitor Team City Module***" << endl;
			cout << "Please enter the Name of the Visitor Team's City: ";
      visitCity=validateString(visitCity);
			tTwo.setCityName(visitCity);
		}
    else if (userChoice == "I" || userChoice == "i")
		{
			cout << "***Update Visitor Team Coach Module***" << endl;
			cout << "Please enter the Name of the Visitor Team's Coach: ";
      visitCity=validateString(visitCoach);
			tTwo.setCoachName(visitCoach);
		}
    else if (userChoice == "J" || userChoice == "j")
		{
			cout << "***Update Visitor Team Timeouts Module***" << endl;
			cout << "Please enter the Number of  Visitor Team Timeouts: ";
      visitTimeouts=validateInt(visitTimeouts);
			tTwo.setTimeoutCount(visitTimeouts);
		}
		else if (userChoice == "Exit" || userChoice == "exit")
		{
			cout << "Exit chosen." << endl;
		}
		else //invalid input: default clause
		{
			cout << "Invalid input." << endl;
			sleep(4);
		}

		s.setHome(tOne);
    s.setVisitor(tTwo);
	} while (userChoice != "Exit" && userChoice != "exit"); 
}


  