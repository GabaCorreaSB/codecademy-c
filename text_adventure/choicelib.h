/*
	Copyright (c) 2023 Gabriel Correa <gabrielcorreasb@protonmail.com>
*/

#include <iostream>

using namespace std;


void start() {
	cout << "=====================\n";
	cout << "The Horror House ! 👹\n";
	cout << "=====================\n";
	cout << "\n";
}

void dead(int death) {
	switch (death) {
		case 1:
			cout << "The chupacabra just caught u sneaking through the window 👺\n";
			break;
		case 2:
			cout << "You tripped while trying to run and hit the head. What a shame !";
			break;
		case 4:
			cout << "Closing the vines droped an axe at ur head. Bloody Hell (Literally) !";
	}
}

void basement_option(int death) {
	switch (death) {
		case 1:
			cout << "While trying to open the door, you hand slliped and you hit ur head at the bed. Tragic.";
			break;
		case 2:
			cout << "You cried until you fainted.";
			break;
		case 4:
			cout << "You are coward sir!";
	}
}

void basement_choice(int choice) {
	switch (choice) {
		case 1:
			basement_option(choice);
			break;
		case 2:
			basement_option(choice);
			break;
		case 3:
			cout << "You got out of the house, and woke up at your bed.... was that a nightmare or what?";
			break;
		case 4:
			basement_option(choice);
			break;
	}
}

void basement_page() {
	int choice;

	cout << "********************************************************************\n";
	cout << "While you cry, with the face on the floor, you see a handle right below you.\nWhat do you do?\n";
	cout << "********************************************************************\n";

	cout << "1) Open the basement door with the handle\n";
	cout << "2) Give up\n";
	cout << "3) Get up, move the bed and open basement door with handle.\n";
	cout << "4) Nothing\n";
	cout << "Choice: ";

	cin >> choice;
	cout << "\n";

	basement_choice(choice);
}

void window_choice(int choice) {
	switch (choice) {
		case 1:
			dead(choice);
			break;
		case 2:
			dead(choice);
			break;
		case 3:
			basement_page();
			break;
		case 4:
			dead(choice);
			break;
	}
}

void window_page() {
	int choice;

	cout << "********************************************************************\n";
	cout << "You look through the window and sees that the sky is red like blood. \nWhat do you do?\n";
	cout << "********************************************************************\n";

	cout << "1) Open the window\n";
	cout << "2) Run from this place! \n";
	cout << "3) Hide under the bed and cry\n";
	cout << "4) Close the blinds\n";
	cout << "Choice: ";

	cin >> choice;
	cout << "\n";

	window_choice(choice);
}

void welcome_choice(int choice) {
	switch (choice) {
		case 1:
			window_page();
			break;
		case 2:
			cout << "You fell asleep and woke up at your room. Nothing wrong here.";
			break;
		case 3:
			cout << "You opened the door and the chupacabra was behind it. Dang it.";
			break;
		case 4:
			cout << "While you're looking around the room, you suddenly woke up at your bed.";
			break;
	}
}

void welcome_page() {
	int choice;

	cout << "********************************************************************\n";
	cout << "You wake up at a strange bed, surrounded by a strange feeling.\nWhat do you do?\n";
	cout << "********************************************************************\n";

	cout << "1) Get up and check the window\n";
	cout << "2) Stay in the bed\n";
	cout << "3) Get up and open the door\n";
	cout << "4) Get up and look around the room\n";
	cout << "Choice: ";

	cin >> choice;
	
	cout << "\n";

	welcome_choice(choice);

}