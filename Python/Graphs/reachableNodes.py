# There is an undirected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.
# You are given a 2D integer array edges of length n - 1 where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree. You are also given an integer array restricted which represents restricted nodes.
# Return the maximum number of nodes you can reach from node 0 without visiting a restricted node.
# Note that node 0 will not be a restricted node.

# Input: n = 7, edges = [[0,1],[1,2],[3,1],[4,0],[0,5],[5,6]], restricted = [4,5]
# Output: 4
# Explanation: The diagram above shows the tree.
# We have that [0,1,2,3] are the only nodes that can be reached from node 0 without visiting a restricted node.

from collections import defaultdict, deque
class Solution:
    def reachableNodes(self, n, edges, restricted):
        adj = defaultdict(set)
        for u, v in edges:
            adj[u].add(v)
            adj[v].add(u)
        
        total = 0
        q = deque()
        q.append(0)
        visited = set()
        restricted = set(restricted)
        while len(q):
            node = q.popleft()    
            for val in adj[node]:
                if val not in restricted and val not in visited:
                    total += 1
                    visited.add(val)
                    q.append(val)
        
        return 1 if not total else total

print(Solution().reachableNodes(7,[[0,1],[1,2],[3,1],[4,0],[0,5],[5,6]],[4,5]))