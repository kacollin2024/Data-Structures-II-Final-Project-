#pragma once

#include <string>
using namespace std;

class Node
{
public:
	string word;
	int wordCount;
	Node* next;

	Node(string value);
};