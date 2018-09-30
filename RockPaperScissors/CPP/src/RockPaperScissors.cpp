/*******************************************************************
* Name: Michael Nutt(michaeltnutt@gmail.com)
* Desc: Rock Paper Scissors game, takes input from one human player,
*       validates correct input and then generates a random number
*       for the computer to choose a move. Keeps score of wins
*******************************************************************/

#include <iostream>
#include <string>
#include "Human.h"

int main()
{
  Human *p1 = new Human();

  p1->promptForMove();

  return 0;
}
