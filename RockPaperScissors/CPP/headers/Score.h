/******************************************
* Desc: Calculates and holds the score for
*       successive games run, saves high
*       score if difference between player
*       and computer score is higher than
*       last 10 players from high score file
******************************************/

#ifndef SCORE_H_
#define SCORE_H_

#include <string>
#include "Human.h"
#include "CPU.h"

class Score
{
private:
  int player1;
  int player2;
  std::string player_name;
  int num_scores;
  int high_scores[10];
  std::string high_score_names[10];

public:
  Score();
  void player1Wins();
  void player2Wins();
  int returnScore(Human*);
  int returnScore(CPU*);
  void printHighScores();
  bool newHighScore();
  bool readHighScores();
  bool saveHighScores();
  void moveScoresDown(int);
};

#endif
