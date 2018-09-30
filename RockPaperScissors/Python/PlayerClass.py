# Class to hold player moves

class Player:
    # Initialize player with choice being blank
    def __init__(self, move):
        self.move = move

    # Return player's choice
    def returnMove(self):
        return self.move.lower()

    # Set choice value
    def setMove(self, move):
        self.move = move
