/***************************************************************
* Desc: Inherits from player, has methods for creating move from
*       psuedo random number.
***************************************************************/

#include "Player.h"

#ifndef CPU_H_
#define CPU_H_

class CPU : public Player
{
public:
  CPU();
  std::string generateMove();
};

#endif
