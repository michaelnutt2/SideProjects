/*************************************************
* Desc: Inherits from player, has methods for
*       accepting input from player and validating
*       the input to ensure it is either rock,
*       paper or scissors.
*************************************************/

#include <string>
#include "Player.h"

#ifndef HUMAN_H_
#define HUMAN_H_

class Human : public Player
{
public:
  bool validateInput(std::string);
  void promptForMove();
};

#endif
