from PlayerClass import Player
import random

# Class for the human player in the game
class Human(Player):
    # Set up human's move
    def __init__(self):
        self.move = self.getMove()
        super().__init__(self.move)
    # Validate input to ensure correct
    def validateMove(self, move):
        if (move.lower() != "rock" and move.lower() != "paper" and move.lower() != "scissors"):
            print("Invalid move!")
            return False
        else:
            return True

    # Get move from player
    def getMove(self):
        valid = False
        while not valid:
            move = input("Enter your move: ")
            valid = self.validateMove(move)
        return move

class CPU(Player):
    def __init__(self):
        self.move = self.generateMove()
        super().__init__(self.move)

    def generateMove(self):
        random.seed()
        move = random.randint(1,3)
        if move is 1:
            return "rock"
        elif move is 2:
            return "paper"
        elif move is 3:
            return "scissors"
