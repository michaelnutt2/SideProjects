/***********************************************
* Desc:   Method definitions for CPU class
***********************************************/

#include <stdlib.h>
#include <time.h>
#include "CPU.h"

// CPU Constructor
CPU::CPU()
{
  setMove(generateMove());
}

// Generates random number from 0-2 and uses that as index for
// Move array to determine computer move
std::string CPU::generateMove()
{
  std::string moves[3] = {"rock", "paper", "scissors"};
  srand(time(NULL));
  int rand_num = rand() % 3;

  return moves[rand_num];
}
