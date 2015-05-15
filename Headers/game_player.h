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
     int         player_level;
     std::string player_Name;
    }*p_data[6];

    int initialize_PlayerRecord(player_data p_data); // Initialize the game player records



};
//-----------------------------------------------------------------------
// Purpose:
//         Iterate the number of Maxplayers to initialize each player record
//
// Return:
//        Record an initialized player_data record
//-----------------------------------------------------------------------
int player_Object::initialize_PlayerRecord(player_data p_data) {
    // Initialize the player record first

   BOOST_FOREACH(int z, p_data){
                   p_data.player_level = 1;
                   p_data.player_Name  = "Empty";
               }
}

#endif //TEST_GAME_PLAYER_Hint
