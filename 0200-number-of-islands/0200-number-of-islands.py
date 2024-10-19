class Solution(object):
    def numIslands(self, grid):
        if not grid:
            return 0 
        rows,cols=len(grid),len(grid[0])
        island=0
        def bfs(r,c):
            grid[r][c]='0'
            if r+1<rows and grid[r+1][c]=='1':
                bfs(r+1,c)
            if r-1>=0 and grid[r-1][c]=='1':
                bfs(r-1,c)
            if c+1<cols and grid[r][c+1]=='1':
                bfs(r,c+1)
            if c-1>=0 and grid[r][c-1]=='1':
                bfs(r,c-1)

        for row in range(rows):
            for col in range(cols):
                if grid[row][col]=='1':
                    bfs(row,col)
                    island+=1
        return island
