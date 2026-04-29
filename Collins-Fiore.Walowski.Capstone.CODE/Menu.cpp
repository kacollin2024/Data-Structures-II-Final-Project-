#include "Menu.h"
#include <iostream>
#include <string>
using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::addWordsToStack()
{
	for (int n = 0 < 25; n++)
	{
		string words[25] = { "The", "golden", "retriever", "bounded", "joyfully", "through", "the", "sun-dappled", "meadow,", "his",
		"tail", "wagging", "furiously", "as", "he", "chased", "a", "bright", "red", "butterfly", "across", "the", "endless", "green", "field."
		};

		if (!words[n].empty())
		{
			if (wordstack.Count(words[n]))
			{
				// word already exists, count was increased
			}
			else
			{
				wordStack.push(words[n]);
			}
		}
	}
}

void Menu::menu()
{
	string theMenu =
		"Please make a selection:\n"
		"_________________________\n"
		"0. Exit\n"
		"1. Display Stack\n"
		"2. Search for a word\n"
		"3. Add a word\n"
		"_________________________\n";

	while (true)
	{
		cout << theMenu;
		string userChoice;
		getline(cin, userChoice);
		if (userChoice.empty())
		{
			continue;
		}

		switch (userChoice[0])
		{
		case '0':
			return; // exists the menu method
		case '1':
			if (wordStack.stackIsEmpty())
			{
				cout << "The stack is empty." << endl;
			}
			else
			{
				wordStack.display();
			}
			break;
		case '2':
		{
			cout << "Enter a word to search for: ";
			string searchWord;
			getline(cin, searchWord);
			int wordResults = wordStack.getWordCount(searchWord);
			if (result > 0)
			{
				cout << "\"" << searchWord << "\" appeared " << result << " time(s)." << endl;
			}
			else
			{
				cout << "\"" << searchWord << "\" did not appear." << endl;
			}
			break;
		}
		case '3':
		{
			cout << "Enter a word to add: ";
			string newWord;
			getline(cin, newWord);
			if (wordStack.Count(newWord)) {
				cout << "Word already exists, count increased." << endl;
			}
			else {
				wordStack.push(newWord);
				cout << "Word added!" << endl;
			}
			break;
		}
		default:
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
		cout << endl;
	}

}
