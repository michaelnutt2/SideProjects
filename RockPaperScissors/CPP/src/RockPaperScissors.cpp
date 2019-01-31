/*******************************************************************
* Name: Michael Nutt(michaeltnutt@gmail.com)
* Desc: Rock Paper Scissors game, takes input from one human player,
*       validates correct input and then generates a random number
*       for the computer to choose a move. Keeps score of wins
*******************************************************************/

#include <iostream>
#include <string>
#include "Human.h"
#include "CPU.h"
#include "Score.h"
#include "Game.h"

int main()
{
  Human *p1 = new Human();
  CPU *p2 = new CPU();
  Score *s = new Score();
  Game *g = new Game();

  g->compareMoves(p1, p2, s);

  return 0;
}
