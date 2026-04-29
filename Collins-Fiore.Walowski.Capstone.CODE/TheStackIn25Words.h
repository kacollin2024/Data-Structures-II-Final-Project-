#pragma once
#include <string>
#include "Node.h"
using namespace std;

class TheStackIn25Words
{
private:
    int MAX_SIZE = 25;
    Node* top;
    int count;
public:
    TheStackIn25Words();
    ~TheStackIn25Words();

    void push(string word);
    string pop();
    bool stackIsEmpty();
    int getCount();
    bool search(string word);
    bool Count(string word);
    void Display();
    int getWordCount(string word);
};

