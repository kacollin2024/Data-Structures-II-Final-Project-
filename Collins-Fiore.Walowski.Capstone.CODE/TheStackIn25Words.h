#pragma once
#include <string>
#include "Node.h"
using namespace std;

class TheStackIn25Words
{

private:
    Node* top;
    int count;
    int MAX_SIZE = 25;

public:
    TheStackIn25Words();
    ~TheStackIn25Words();

    void push(string word);
    string pop();
    int getCount();
    bool stackIsEmpty();
    bool search(string word);
    bool Count(string word);
    void display();
    int getWordCount(string word);
};