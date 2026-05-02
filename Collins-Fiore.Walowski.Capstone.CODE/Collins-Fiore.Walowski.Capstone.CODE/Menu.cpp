#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{
	addWordsToStack();
}

void Menu::addWordsToStack()
{
	string words[25] = { "The", "golden", "retriever", "bounded", "joyfully", "through", "the", "sun-dappled", "meadow", "his",
		"tail", "wagging", "furiously", "as", "he", "chased", "a", "bright", "red", "butterfly", "across", "the", "endless", "green", "field"
	};

	for (int n = 0; n < 25; n++)
	{
		if (!words[n].empty())
		{
			if (wordStack.incrementCount(words[n]))
			{

			}
			else
			{
				wordStack.push(words[n]);
			}
		}
	}
}

void Menu::displayMenu()
{
	string menu = "Please make a selection:\n0. Exit\n1. Display Stack\n2. Search for a word\n3. Add a word";

	while (true)
	{
		cout << endl << menu << endl;
		cout << "Enter choice: ";

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "Exiting program" << endl;
			return;
		case 1:
			displayStack();
			break;
		case 2:
			searchWord();
			break;
		case 3:
			addWord();
			break;
		default:
			cout << "Invalid selection" << endl;
			break;
		}
	}
}

void Menu::displayStack()
{
	if (wordStack.stackIsEmpty())
	{
		cout << "The stack is empty" << endl;
	}
	else
	{
		wordStack.displayAll();
	}
}

void Menu::searchWord()
{
	cout << "Enter word to search: ";
	string word;
	cin >> word;

	int count = wordStack.getWordCount(word);

	if (count > 0)
	{
		cout << "Word \"" << word << "\" appeared " << count << " time(s)" << endl;
	}
	else
	{
		cout << "Word \"" << word << "\" did not appear" << endl;
	}
}

void Menu::addWord()
{
	cout << "Enter word to add: ";
	string word;
	cin >> word;

	if (wordStack.incrementCount(word))
	{
		cout << "Word already exists, count increased" << endl;
	}
	else
	{
		wordStack.push(word);
		cout << "Word added" << endl;
	}
}