# Board class, displays board

class Board():
    def __init__(self):
        self.board = [
            ['-','1','2','3','4','5','6','7','8','9','10'],
            ['A','~','~','~','~','~','~','~','~','~','~'],
            ['B','~','~','~','~','~','~','~','~','~','~'],
            ['C','~','~','~','~','~','~','~','~','~','~'],
            ['D','~','~','~','~','~','~','~','~','~','~'],
            ['E','~','~','~','~','~','~','~','~','~','~'],
            ['F','~','~','~','~','~','~','~','~','~','~'],
            ['G','~','~','~','~','~','~','~','~','~','~'],
            ['H','~','~','~','~','~','~','~','~','~','~'],
            ['I','~','~','~','~','~','~','~','~','~','~']
        ]

    # Display current state of the board
    def display(self):
        for row in self.board:
            print(row)

    # Update slot to be hit, if it has not been chosen so far
    def updateHit(self,y,x):
        for row in self.board:
            if row[0] is y:
                if row[int(x)] is not '~':
                    return False
                row[int(x)] = 'X'
                return True

    # Update slot to be a miss, if it has not been chosen so far
    def updateMiss(self,y,x):
        for row in self.board:
            if row[0] is y:
                if row[int(x)] is not '~':
                    return False
                row[int(x)] = 'O'
                return True

    def updateShipPos(self, ship, y, x, orientation):
        # Find where the row is that they want to add to
        for index, row in enumerate(self.board):
            if row[0] is y:
                break
        # Add the ship to the board
        for i in range(ship[1]):
            self.board[index][int(x)] = 'S'
            if orientation is "vertical":
                index += 1
            else:
                x = int(x) + 1
            if int(x) > 10 or index > 10:
                print("Invalid")
