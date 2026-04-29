#pragma once
#include <string>
using namespace std;

class TheStackIn25Words
{

private:
    void push();

    string pop();

    bool stackIsEmpty();

public:
    TheStackIn25Words();

    ~TheStackIn25Words();

    void mainMenu();

    void loadTheStackIn25Words();
};
