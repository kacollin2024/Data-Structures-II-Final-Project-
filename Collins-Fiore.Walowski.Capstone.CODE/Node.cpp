#include "Node.h"
#include <string>
using namespace std;

Node::Node()
{
    next = nullptr;
    wordCount = 1;
}
Node::Node(string word)
{
    next = nullptr;
    wordCount = 1;
    setData(word);
}
bool Node::setData(string newword)
{
    if (newword.empty())
        return false;
    this->data = newword;
    return true;
}
string Node::getData()
{
    return this->data;
}

// going to need more methods for this node class

void Node::setNext(Node* nextNode)
{
    next = nextNode;
}

Node* Node::getNext()
{
    return next;
}