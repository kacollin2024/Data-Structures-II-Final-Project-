#include "TheStackIn25Words.h"
#include <string>
// #include "Node.h"
using namespace std;

TheStackIn25Words::TheStackIn25Words()
{
    // constructor
}

TheStackIn25Words::~TheStackIn25Words()
{
    // deconstructor
    // clears up memory by deleting all nodes
}

void TheStackIn25Words::loadTheStackIn25Words()
{
    // preloads the stack with 25 different words
}

void TheStackIn25Words::push()
{
    // Create new node with this word
    // Check if our stack is empty (this is the first node)
    // If empty, this node become the top
    // If not empty, connect this node to the current top
    // Make this new node top of each stack
}

string TheStackIn25Words::pop()
{
    // Check if stack is empty
    // If empty, tell the user there is nothing to pop and return null
    // Otherwise, grab the top node
    // move top down to the previous node
}

bool TheStackIn25Words::stackIsEmpty()
{
    // Check if our stack has any nodes
    // return true if top is null (empty stack)
    // return false if we have nodes (top is not null)
}

// recycled code from the cave app