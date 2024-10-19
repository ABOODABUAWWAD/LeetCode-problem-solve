class Solution(object):
    def orangesRotting(self, grid):
        rows, cols = len(grid), len(grid[0])
        queue = deque()
        fresh_oranges = 0
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 2:
                    queue.append((r, c))
                elif grid[r][c] == 1:
                    fresh_oranges += 1
        if fresh_oranges == 0:
            return 0
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        minutes_passed = 0
        while queue:
            minutes_passed += 1
            for _ in range(len(queue)):
                r, c = queue.popleft()
                for dr, dc in directions:
                    new_r, new_c = r + dr, c + dc
                    if 0 <= new_r < rows and 0 <= new_c < cols and grid[new_r][new_c] == 1:
                        grid[new_r][new_c] = 2
                        fresh_oranges -= 1
                        queue.append((new_r, new_c))
        return minutes_passed - 1 if fresh_oranges == 0 else -1
