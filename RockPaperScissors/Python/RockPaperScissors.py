# Rock Paper Scissors game written in Python
from HumanClass import *
from ScoreClass import Score

# Function that runs the game
def game(score):
    p1 = Human()
    p2 = CPU()

    print(p1.returnMove().upper() + " VERSUS " + p2.returnMove().upper())

    # Determines the winner by checking each possible human move
    # versus each possible computer move
    if p1.returnMove() == "rock":
        if p2.returnMove() == "paper":
            score.addCPU()
        elif p2.returnMove() == "scissors":
            score.addHuman()
        else:
            print("It's a tie!")
    elif p1.returnMove() == "paper":
        if p2.returnMove() == "scissors":
            score.addCPU()
        elif p2.returnMove() == "rock":
            score.addHuman()
        else:
            print("It's a tie!")
    elif p1.returnMove() == "scissors":
        if p2.returnMove() == "rock":
            score.addCPU()
        elif p2.returnMove() == "paper":
            score.addHuman()
        else:
            print("It's a tie!")

def main(score):
    # Initialize the players and score
    play = True

    # Continue playing until the player enters "no"
    while play:
        game(score)
        score.displayScore()
        choice = input("Play again?\n")
        if choice.lower() == "no":
            play = False

if __name__ == '__main__':
    score = Score()
    main(score)
