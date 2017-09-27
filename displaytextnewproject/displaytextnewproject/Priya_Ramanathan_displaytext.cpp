/*
Priya Ramanathan-9/21/2017 p-2
Intro to program problem
*/
//libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "press any key to continue . . .";
	while (!_kbhit());
	cout << "\n";
}
//MAIN
void main() {
	// Define & assign your variable(s)
	// Display Text
	cout << "Hello world!" << endl;
	pause();
	// no system(""); commands anymore

	return;

}