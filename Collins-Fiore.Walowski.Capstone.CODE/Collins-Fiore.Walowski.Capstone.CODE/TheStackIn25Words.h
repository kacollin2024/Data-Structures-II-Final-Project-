#pragma once

#include "Node.h"
#include <string>
using namespace std;

class TheStackIn25Words
{
private:
	Node* top;
	int count;

public:
	TheStackIn25Words();
	~TheStackIn25Words();
	void push(string word);
	string pop();
	int getCount();
	bool stackIsEmpty();
	bool incrementCount(string word);
	void displayAll();
	int getWordCount(string word);
};