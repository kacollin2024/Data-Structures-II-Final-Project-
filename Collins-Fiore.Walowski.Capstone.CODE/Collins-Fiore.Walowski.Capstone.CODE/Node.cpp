#include "Node.h"

Node::Node(string value)
{
	word = value;
	wordCount = 1;
	next = nullptr;
}