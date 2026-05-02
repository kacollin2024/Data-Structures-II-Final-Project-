#pragma once

#include "TheStackIn25Words.h"

class Menu
{
private:
	TheStackIn25Words wordStack;

public:
	Menu();
	void displayMenu();
	void addWordsToStack();
	void displayStack();
	void searchWord();
	void addWord();
};