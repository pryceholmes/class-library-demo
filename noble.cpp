
// Q2b: Define displayRoom() for Noble class (5 points)
// Define the function displayRoom() that you declared within the Noble class in the header file
// See expected output in question file.

// (displayList() function in the hw7.cpp should call this function.)
// Include necessary header files


#include "room.h"
#include "noble.h"

#include <iostream>

void Noble::displayRoom()
{
	cout << "\nRoom name: " << getName() << endl;;
	cout << "Number of Rooms: " << getNo() << endl;
	if (getLibraryType() == hayden) {
		cout << "Library: Hayden" << endl;
	}
	else {
		cout << "Library: Noble" << endl;
	}
}
