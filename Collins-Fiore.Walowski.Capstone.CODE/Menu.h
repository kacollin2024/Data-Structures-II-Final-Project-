#pragma once
#include "TheStackIn25Words.h"

class Menu
{
private:
    TheStackIn25Words wordStack;

public:
    Menu();
    ~Menu();

    void menu();
    void addWordsToStack();
    //void pushWord();
    //void popWord();
    //void displayStack();
};