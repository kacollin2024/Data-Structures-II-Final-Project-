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


