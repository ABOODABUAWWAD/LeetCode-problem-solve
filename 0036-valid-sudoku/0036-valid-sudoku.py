class Solution(object):
    def isValidSudoku(self, board):
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        squares = [set() for _ in range(9)]  
        for i in range(9):
            for j in range(9):
                value = board[i][j]
                if value == '.':
                    continue
                if value in rows[i]:
                    return False
                rows[i].add(value)
                if value in cols[j]:
                    return False
                cols[j].add(value)
                square_index = (i // 3) * 3 + (j // 3)
                if value in squares[square_index]:
                    return False
                squares[square_index].add(value)
        return True