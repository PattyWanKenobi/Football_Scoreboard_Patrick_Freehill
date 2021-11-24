// Soccer_Scoreboard_Freehill1.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Create a soccer scoreboard using OOP in C++

#include <iostream>
#include <string>
#include <unistd.h>
#include "functions.h"

using namespace std;

int main()
{
	Scoreboard s;
	Team tOne;
	Team tTwo;
	string homeName;
	string userChoice;
	int homeScore;
  

	tOne.setHomeStatus(true); //tOne is the home team due to true status
	//add some initial data to s
	s.setHome(tOne); //set tOne as the home team due to homeStatus = true
	s.setVisitor(tTwo); // set tTwo as the visitor team
scoreBoardMenu();

	
	return 0;
}


