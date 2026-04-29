#pragma once
#include <string>
using namespace std;

class Node
{
public:

    Node* previousNode;
    string currentWord;

    Node(); // Constructor

    void setCurrentWord();

    string getCurrentWord();
};

