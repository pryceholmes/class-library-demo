
// Q2a: Define displayRoom() for Hayden class (5 points)
// Define the function displayRoom() that you declared within the Hayden class in the header file
// See expected output in question file.

// (displayList() function in hw7.cpp should call this function.)
// Include necessary header files

#include "room.h"
#include "hayden.h"

#include <iostream>

void Hayden::displayRoom()
{
	cout << "\nRoom name: " << getName() << endl;;
	cout << "Number of Rooms: " << getNo() << endl;
	if (getLibraryType() == hayden) {
		cout << "Library: Hayden" << endl;
	} else {
		cout << "Library: Noble" << endl;
	}
}
