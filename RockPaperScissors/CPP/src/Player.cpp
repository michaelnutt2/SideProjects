/*****************************************
* Method definitions for Player class
*****************************************/

#include <string>
#include <iostream>
#include "Player.h"

Player::~Player()
{
  std::cout << "This is a destructor\n";
}

// Sets move to player entered value
void Player::setMove(std::string m)
{
  move = m;
  if(move == "rock")
    choice = rock;
  else if(move == "paper")
    choice = paper;
  else
    choice = scissors;
}

// Returns player move
std::string Player::returnMove()
{
  return move;
}

moves Player::returnChoice()
{
  return choice;
}
