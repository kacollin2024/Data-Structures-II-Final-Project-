#include "TheStackIn25Words.h"
#include <iostream>
using namespace std;

TheStackIn25Words::TheStackIn25Words()
{
	top = nullptr;
	count = 0;
}

TheStackIn25Words::~TheStackIn25Words()
{
	while (!stackIsEmpty())
	{
		pop();
	}
}

void TheStackIn25Words::push(string word)
{
	Node* newNode = new Node(word);

	if (stackIsEmpty())
	{
		top = newNode;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}

	count++;
}

string TheStackIn25Words::pop()
{
	if (stackIsEmpty())
	{
		return "";
	}

	Node* current = top;
	string word = current->word;
	top = top->next;
	delete current;
	count--;
	return word;
}

bool TheStackIn25Words::stackIsEmpty()
{
	return top == nullptr;
}

int TheStackIn25Words::getCount()
{
	return count;
}

bool TheStackIn25Words::incrementCount(string word)
{
	Node* current = top;

	while (current != nullptr)
	{
		if (current->word == word)
		{
			current->wordCount++;
			return true;
		}
		current = current->next;
	}

	return false;
}

void TheStackIn25Words::displayAll()
{
	Node* current = top;

	while (current != nullptr)
	{
		cout << current->word << " (count: " << current->wordCount << ")" << endl;
		current = current->next;
	}
}

int TheStackIn25Words::getWordCount(string word)
{
	Node* current = top;

	while (current != nullptr)
	{
		if (current->word == word)
		{
			return current->wordCount;
		}
		current = current->next;
	}

	return 0;
}