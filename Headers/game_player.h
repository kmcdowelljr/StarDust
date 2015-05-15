//
// Created by kmcdowel on 5/14/2015.
//


using namespace std;

#ifndef TEST_GAME_PLAYER_H
#define TEST_GAME_PLAYER_H

#define MAXPLAYER = 6       // Total number of players that can make-up a party
#define PARTY     = 1       // The min require number to make-up a party
#define MAXLEVEL  = 50      // The highest level to reach in the game
#define MAXPLAYERLIST = 6;  // The MAX number of players in a roster


class player_Object {

public:
    int initialize_PlayerRecord(player_data);
private:
    // Player Class Types
    //-->
    enum classType {

    } *class_Type;

    // Player Data Record
    //-->
    struct player_data{
     int         player_level = 1;
     std::string player_Name="Empty";
    }* p_data;
};

int player_Object::initialize_PlayerRecord(player_data) {

}

#endif //TEST_GAME_PLAYER_H