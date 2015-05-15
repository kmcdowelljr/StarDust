//
// Created by kmcdowel on 5/12/2015.
//

# include <boost/filesystem.hpp>

using namespace boost::filesystem;

#ifndef TEST_GAME_FILE_H
// Game Directory path
path p{"C:\\Users\\kmcdowel\\ClionProjects\\Test\\config.ini"};

#define TEST_GAME_FILE_H
// Game File version
//->
#define game_FileVersion 1.00

class gameFile_Utilites
{
public:
    int checkFile(path);
};
class gameFile_Header
{
   public:
           int signature;
           int version;
           long length;
};
#endif //TEST_GAME_FILE_H
