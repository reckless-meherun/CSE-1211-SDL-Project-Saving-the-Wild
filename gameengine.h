#ifndef GAME_ENGINE
#define GAME_ENGINE

#include "all_headers.h"

enum
{
    TITLE,
    MENU,
    HELP,
    SELECT_LEVEL,
    NAME_INPUT,
    SCOREBOARD,
    LEVEL_ONE_LOADING,
    LEVEL_ONE,
    LEVEL_ONE_GAME_OVER,
    LEVEL_TWO_LOADING,
    LEVEL_TWO,
    LEVEL_TWO_GAME_OVER,
    LOCKED,
    UNLOCKED,
    SORRY
} stage;

extern int level_one_played;
extern int level_two_played;
extern int flag_music_2;
void run_game();

#endif
