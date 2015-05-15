//
// Created by kmcdowel on 5/14/2015.
//

#include<list>
#include<boost/foreach.hpp>

using namespace std;

#ifndef TEST_GAME_PLAYER_H
#define TEST_GAME_PLAYER_H

#define MAXPLAYER = 6       // Total number of players that can make-up a party
#define PARTY     = 1       // The min require number to make-up a party
#define MAXLEVEL  = 50      // The highest level to reach in the game
#define MAXPLAYERLIST = 6;  // The MAX number of players in a roster


class player_Object {

public:


    // Player Class Types
    //-->
    enum classType {

    } *class_Type;

    // Player Data Record
    //-->
    struct player_data{
     int         player_level = 1;
     std::string player_Name="Empty";
    }*player_data[MAXPLAYERLIST];

    int initialize_PlayerRecord(player_data);

private:
     player_data *p_data[];

};

int player_Object::initialize_PlayerRecord(player_data) {
    // Initialize the player record first
    player_data temp;
    for ( int z = 0; z < MAXPLAYERLIST; z++)
    {
        temp[z].player_Name   = "Empy";
        temp[z].player_level  = 1;
    }
    return 0;
}

#endif //TEST_GAME_PLAYER_Hint
