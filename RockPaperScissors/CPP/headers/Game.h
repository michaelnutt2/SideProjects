/*******************************************************
* Desc: Class definition for game managing class
*       runs the games and compares results to determine
*       the winner.
*******************************************************/

#ifndef GAME_H_
#define GAME_H_

#include "Human.h"
#include "CPU.h"
#include "Score.h"

class Game
{
public:
  void rematch(Human*, CPU*, Score*);
  void compareMoves(Human*, CPU*, Score*);
  typedef enum{
    rock,
    paper,
    scissors
  }move;
};

#endif
