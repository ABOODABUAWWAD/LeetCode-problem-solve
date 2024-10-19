class Solution(object):
    def cloneGraph(self, node):
        if not node:
            return None
        copiesnode={}
        def clone(node):
            if node in copiesnode:
                return copiesnode[node]
            copy=Node(node.val)
            copiesnode[node]=copy
            for n in node.neighbors:
                copy.neighbors.append(clone(n))
            return copy
        return clone(node)