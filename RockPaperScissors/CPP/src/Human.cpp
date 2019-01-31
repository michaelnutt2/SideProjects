/*********************************************
* Desc: Method definitions for the Human class
*********************************************/

#include <string>
#include <iostream>
#include "Human.h"

// Constructor for human class, prompts player for their move
Human::Human()
{
  setMove(promptForMove());
}

// Verifies user has entered valid move
bool Human::validateInput(std::string m)
{
  if(m != "rock" && m != "scissors" && m != "paper")
  {
    std::cout << "Invalid input, expecting \"rock\", \"paper\", or \"scissors\"\n";
    std::cout << "(lower case)\n";
    return false;
  }

  return true;
}

std::string Human::promptForMove()
{
  std::string move;

  // Prompt for user to enter move
  // Loops through until user enters a valid move
  do
  {
    std::cout << "Enter your move: ";
    std::cin >> move;
  } while(!validateInput(move));

  return move;
}
