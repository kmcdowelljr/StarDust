# include <boost/version.hpp>
#include <iostream>
#include "Headers/game_defines.h"
//#include "game_file.h"
#include "Headers/gmae_tools.h"
#include "Headers/game_menus.h"
#include "Headers/game_player.h"


extern "C" {
# include "lua.h"
# include "lauxlib.h"
# include "lualib.h"
}
using namespace std;



int main() {


    cout << "Hello, World!" << endl;
    std::cout << "Boost version: " << std::hex
    << ((BOOST_VERSION >> 20) & 0xF)
    << "."
    << ((BOOST_VERSION >> 8) & 0xFFF)
    << "."
    << (BOOST_VERSION & 0xFF)
    << std::endl;

    MainMenu();
    return 0;
}