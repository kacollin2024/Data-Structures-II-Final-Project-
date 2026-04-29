#include "TheStackIn25Words.h"
#include <string>
#include <iostream>
#include "Node.h"
using namespace std; 

TheStackIn25Words::TheStackIn25Words()
{
    top = nullptr;
    count=0;
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
    string word = current->getData();
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

bool TheStackIn25Words::search(string word)
{
    Node* current = top;
    while (current != nullptr)
    {
        if (current->getData() == word)
        {
            return true;
        }
        current = current->getNext();
    }
    return false;
}
bool TheStackIn25Words::Count(string word)
{
    Node* current = top;
    while (current != nullptr) {
        if (current->getData() == word) {
            current->wordCount++;
            return true;
        }
        current = current->getNext();
    }
    return false;
}

void TheStackIn25Words::Display()
{
     Node* current = top;
    while (current != nullptr)
     {
        cout << current->getData() << " (count: " << current->wordCount << ")" << endl;
        current = current->getNext();
    }
}
int TheStackIn25Words::getWordCount(string word) {
    Node* current = top;
    while (current != nullptr) {
        if (current->getData() == word) {
            return current->wordCount;
        }
        current = current->getNext();
    }
    return 0;
}