//analaysis of string
// - finds string length
// - finds first and last letters of string, 
// - finding index of a letter contained in the string

#include <iostream>
#include <string>
using namespace std;

string name;
char characterToFind;

int main() {
	cout << "String analyser program" << endl;
	cout << "------------------------" << endl;

	cout << "please enter a name: ";
	cin >> name;

	cout << "string to analyse is : " << name << endl;
	cout << "-------------------------" << endl;
	cout << "           INFO          " << endl;
	cout << "-------------------------" << endl;

	cout << name << " uses " << name.size() << " bites " << endl;
	cout << name << " has " << name.length() << " letters " << endl;
	cout << "The first letter of the name is: " << name.front() << endl;
	cout << "The last letter of the name is: " << name.back() << endl;

	//finding character index
	cout << "-------------------------" << endl;
	cout << "      INDEX FINDER       " << endl;
	cout << "-------------------------" << endl;

	cout << "enter a character to find its index: " << characterToFind;
	cin >> characterToFind;
	cout << characterToFind << " is the letter you chose!" << endl;

	cout << "---------USING string.find() APPROACH----------" << endl;
	cout << "the character you chose is at index " << name.find(characterToFind) << endl;
		
	cout << "-----------FORLOOP/CONDITIONAL APPROACH-----------" << endl;
	//if the index of the character in the name string does not have a position, it will exit.
	if (name.find(characterToFind) == name.npos) {
		cout << "doesnt exist" << endl;
	} else {
		for (int j = 0; j < name.length(); j++) {
			if (name[j] == characterToFind) {
				cout << "The letter " << name[j] << " is at index: " << j << endl;
			}
		}
	}
	system("pause");
}