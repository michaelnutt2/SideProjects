/*********************************************
* Desc: Method definitions for the Human class
*********************************************/

#include <string>
#include <iostream>
#include "Human.h"

// Verifies user has entered valid move
bool Human::validateInput(std::string m)
{
  if(m != "rock" && m != "scissors" && m != "paper")
  {
    std::cout << "Invalid input, expecting \"Rock\", \"Paper\", or \"Scissors\"\n";
    return false;
  }

  return true;
}

void Human::promptForMove()
{
  std::string move;

  // Prompt for user to enter move
  // Loops through until user enters a valid move
  do
  {
    std::cout << "Enter your move: ";
    std::cin >> move;
  } while(!validateInput(move));
}
