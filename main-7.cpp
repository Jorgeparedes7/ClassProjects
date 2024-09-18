//Name:Jorge Paredes
//Date:9/9/2024
//Assignment: Project 2
#include <stdio.h>
using namespace std;
#include <cstdlib>
#include <iostream>

int main()
{

//Variables for difficulty
	const int Easy = 1;
	const int Medium = 2;
	const int Hard = 3;

//Variables for rock, paper, scissors
	const int Rock = 1;
	const int Paper = 2;
	const int Scissors = 3;

// Variables for user/computer
	int computerLevel;
	int userDecision;
	int computersDecision;

// Random value generator integer
	int value = rand();

//Displaying difficulty
	cout << "Hello!\n";
	cout << "Welcome to rock, paper, scissors! Choose the computers difficulty\n";
	cout << "Level:\n";
	cout << "1. Easy\n2. Medium\n3. Hard\n";
	cout << "Choose the difficulty level your desire >:)\n";
	cin >> computerLevel;

	// The reason you need a switch statement here is because the user needs to pick its difficulty to be able to move to the next step so lab 3 was very helpful for this task.
	switch(computerLevel)
	{
	case Easy:
		cout << "You have chosen easy mode.\n";
		break;
	case Medium:
		cout << "You have chosen medium mode.\n";
		break;
	case Hard:
		cout << "You chosen hard mode.\n";
		break;
	default:
		cout << "Invalid choise my friend. Difficulty set to easy.\n";
		computerLevel = Easy;

	}

	//Now the users turn
	cout << "Its your turn!\n";
	cout << "1. Rock\n2. Paper\n3. Scissors\n";
	cout << "Input your move!\n";
	cin >> userDecision;

	switch(userDecision)
	{
	case Rock:
		cout << "You chose rock.\n";
		break;
	case Paper:
		cout << "You chose paper.\n";
		break;
	case Scissors:
		cout << "You chose scissors.\n";
		break;
	default:
		cout << "Invalid choice.\nComputer wins :) ";
		break;
	}

	//Now we have to do the randomization for for the computers choice depending on the difficulty
	computersDecision = rand() % 3 + 1;

	//Now we have to generate the computers decision for medium difficulty
	if (computerLevel == Medium) 
{
	if (rand() % 2 == 0) {
		switch (userDecision) {
		case Rock:
			computersDecision = Paper;
			break;
		case Paper:
			computersDecision = Scissors;
			break;
		case Scissors:
			computersDecision = Rock;
			break;
	}
}
	}
	// If else statement for hard difficulty
	else if (computerLevel == Hard) {
		switch(userDecision) {
		case Rock:
			computersDecision = Paper;
			break;
		case Paper:
			computersDecision = Scissors;
			break;
		case Scissors:
			computersDecision = Rock;
			break;

	}
}
	//Now we display the computers decision 
	switch(computersDecision)
	{
	case Rock:
		cout << "Computer chose rock.\n";
		break;
	case Paper:
		cout << "\nComputer chose paper.\n";
		break;
	case Scissors:
		cout << "Computer chose scissors.\n";
		break;
	}

	// If and else statements ragarding what the outcome is going to be
	// Tie
	if (userDecision == computersDecision) {
		cout << "Its a tie, booooo boring.";
		// The user wins
	}//Nested if else statment using logical condition
	else if ((userDecision == Rock && computersDecision == Scissors) ||
	         (userDecision == Paper && computersDecision == Rock) ||
	         (userDecision == Scissors && computersDecision == Paper)) {
		cout << "\nYou won! Lets gooooo!";
		//The user loses
	}
	else {
		cout << "\nYou lose. HAHAHAHA";
	}

	return 0;

}