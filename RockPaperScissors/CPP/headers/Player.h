/**********************************************
* Desc: Class header file for the Player class,
*       Human and CPU inherit from this class
**********************************************/
#include <string>

#ifndef PLAYER_H_
#define PLAYER_H_

typedef enum{
  rock,
  paper,
  scissors
}moves;

class Player
{
private:
  // Variable declarations
  std::string move;
  moves choice;

public:
  ~Player();
  // Set/Get
  virtual void setMove(std::string);
  virtual std::string returnMove();
  virtual moves returnChoice();
};

#endif
