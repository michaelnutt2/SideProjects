/***********************************************
* Function definitions for Game class
************************************************/

#include "Game.h"
#include "Human.h"
#include "CPU.h"
#include "Score.h"
#include <iostream>
#include <cctype>

// Confirms if player wants to play again, then prompts for new move
// and generates new move for CPU
void Game::rematch(Human *p1, CPU *p2, Score *s)
{
  char confirm;
  std::cout << "Play again? (Y/N)\n";
  std::cin >> confirm;

  if(tolower(confirm) == 'y')
  {
    p1->setMove(p1->promptForMove());
    p2->setMove(p2->generateMove());
    compareMoves(p1, p2, s);
  }
  else
  {
    s->newHighScore();
    s->printHighScores();
    s->saveHighScores();
  }
  return;
}

// Compares possible moves using switch statements to determine the winner
// Then calls rematch to see if player wants to play again
void Game::compareMoves(Human *p1, CPU *p2, Score *s)
{
  std::cout << p1->returnMove() << " VS " << p2->returnMove() << std::endl;

  switch(p1->returnChoice())
  {
    case rock:
    {
      switch(p2->returnChoice())
      {
        case rock:
        {
          std::cout << "It's a tie!\n";
          break;
        }
        case paper:
        {
          std::cout << "The CPU wins!\n";
          s->player2Wins();
          break;
        }
        case scissors:
        {
          std::cout << "You win!\n";
          s->player1Wins();
          break;
        }
      }
      break;
    }
    case paper:
    {
      switch(p2->returnChoice())
      {
        case paper:
        {
          std::cout << "It's a tie!\n";
          break;
        }
        case scissors:
        {
          std::cout << "The CPU wins!\n";
          s->player2Wins();
          break;
        }
        case rock:
        {
          std::cout << "You win!\n";
          s->player1Wins();
          break;
        }
      }
      break;
    }
    case scissors:
    {
      switch(p2->returnChoice())
      {
        case scissors:
        {
          std::cout << "It's a tie!\n";
          break;
        }
        case rock:
        {
          std::cout << "The CPU wins!\n";
          s->player2Wins();
          break;
        }
        case paper:
        {
          std::cout << "You win!\n";
          s->player1Wins();
          break;
        }
      }
      break;
    }
  }
  std::cout << "Current score: " << s->returnScore(p1)-s->returnScore(p2) << std::endl;
  rematch(p1, p2, s);
}
