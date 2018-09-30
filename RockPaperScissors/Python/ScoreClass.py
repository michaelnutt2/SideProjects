# Class that keeps track of the game score

class Score:
    def __init__(self):
        self.human = 0
        self.cpu = 0

    def addHuman(self):
        print("The human wins!")
        self.human += 1

    def addCPU(self):
        print("The computer wins!")
        self.cpu += 1

    def displayScore(self):
        print("Human: " + str(self.human))
        print("CPU: " + str(self.cpu))
