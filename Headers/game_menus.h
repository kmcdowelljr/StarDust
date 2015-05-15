//
// Created by kmcdowel on 5/14/2015.
//

# include <stdio.h>

// This file contains all game related menus

#ifndef TEST_GAME_MENUS_H

#define TEST_GAME_MENUS_H

// Menu
//-->
#endif //TEST_GAME_MENUS_H

using namespace std;

// Main Menu
//-->
void MainMenu()
{
    printf(R"EOF(
    +==============================+
    |         Main Menu            |
    |==============================|
    | (N)ew Game                   |
    | (L)oad Saved Game            |
    | (P)layer Roster              |
    | (E)xit and Quit              |
    +==============================+
    | (C) 2015  All Rights Reserved|
    +==============================+)EOF");
}
