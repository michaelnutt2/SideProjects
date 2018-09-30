/**********************************************
* Desc: Class header file for the Player class,
*       Human and CPU inherit from this class
**********************************************/
#include <string>

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
private:
  // Variable declarations
  std::string move;
public:
  ~Player();
  // Set/Get
  virtual void setMove(std::string);
  virtual std::string returnMove();
};

#endif
