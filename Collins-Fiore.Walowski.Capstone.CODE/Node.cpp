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

void Node::setNext(Node* nextNode)
{
    this->next = nextNode;
}

Node* Node::getNext()
{
    return this->next;
}
