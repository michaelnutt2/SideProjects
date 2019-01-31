/************************************************
* Desc: Method definitions for Score class
************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Score.h"

Score::Score()
{
  player1 = 0;
  player2 = 0;
  num_scores = 0;
  readHighScores();
}

// Setters/Getters
void Score::player1Wins()
{
  player1++;
}

void Score::player2Wins()
{
  player2++;
}

int Score::returnScore(Human *p)
{
  return player1;
}

int Score::returnScore(CPU *p)
{
  return player2;
}

// Reads in high scores, if scores exist
// If no high score exists assumes that
// There are no high scores and will create
// player as first high score
bool Score::readHighScores()
{
  std::ifstream high_score_file;

  // Opens high score file
  high_score_file.open("high_scores.txt");

  // Makes sure the file opened
  if(!high_score_file.is_open())
    return false;

  // Checks how many scores are in the file
  high_score_file >> num_scores;
  if(num_scores == 0)
    return false;

  // Loops through existing scores
  for(int i = 0; i < num_scores; i++)
  {
    high_score_file >> high_score_names[i] >> high_scores[i];
  }

  return true;
}

// Prints high score table
void Score::printHighScores()
{
  std::cout << "+---Initials---|---Score---+\n";

  for(int i = 0; i < num_scores; i++)
  {
    std::cout << "|     " << high_score_names[i] << "      |"
              << std::setw(6) << std::right << std::setfill(' ') << high_scores[i] << "     |\n";
  }
  std::cout << "+--------------|-----------+\n";
}

// Loops through high score table to see if difference
// between computer and player points is higher than
// previous 10 high scores.
bool Score::newHighScore()
{
  int score = player1-player2;
  if(score <= 0)
    return false;

  // Checks if a new high score has been achieved
  // Moves all lower scores down and adds new score to the array
  for(int i = 0; i <= num_scores; i++)
  {
    // Only checks if score is higher if there are already 10 high scores,
    // Or if it's greater than/equal to if there are less,
    // And checking if there are 10 scores, adds the player's score to the table
    // If their score is greater than 0
    if((score > high_scores[i] && num_scores == 10) || ((score >= high_scores[i] || i == num_scores )&& num_scores < 10))
    {
      std::cout << "New High Score!\nEnter your initals: ";
      std::cin >> player_name;
      moveScoresDown(i);
      if(num_scores < 10)
        num_scores++;
      high_scores[i] = score;
      high_score_names[i] = player_name;
      return true;
    }
  }
}

// Moves high scores down going from the end of the list to
// the position of the new high score to be added
void Score::moveScoresDown(int i)
{
  for(int j = num_scores; j > i; j--)
  {
    high_scores[j] = high_scores[j-1];
    high_score_names[j] = high_score_names[j-1];
  }
}

bool Score::saveHighScores()
{
  std::ofstream high_score_file;

  // Open high score file
  high_score_file.open("high_scores.txt");

  // Make sure the file opened
  if(!high_score_file.is_open())
    return false;

  high_score_file << num_scores << std::endl;
  // Loops through scores to save
  for(int i = 0; i < num_scores; i++)
  {
    high_score_file << high_score_names[i] << " " << high_scores[i] << std::endl;
  }
}
