class Solution(object):
    def cloneGraph(self, node):
        if not node:
            return None
        q = deque([node])
        clone_map = {node:Node(node.val)}
        while q:
            curr_node = q.popleft()  
            for neighbor in curr_node.neighbors:
                if neighbor not in clone_map:
                    clone_map[neighbor] = Node(neighbor.val)
                    q.append(neighbor)
                clone_map[curr_node].neighbors.append(clone_map[neighbor])
        return clone_map[node]
