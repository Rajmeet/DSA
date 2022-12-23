# Detect cycle in an undirected graph
# Given an undirected graph, check if there is a cycle in the graph. If there is a cycle, return true. If there is no cycle, return false.
# Input:  
# [[0,1], [1,2], [1,3], [2,4], [3,4]]
# Output: true

from collections import defaultdict
def detectCycleUndirected(graph):
    # create graph
    adj = defaultdict(set)
    for u,v in graph:
        adj[u].add(v)
        adj[v].add(u)
    
    visited = set()
    def dfs(node, parent):
        visited.add(node)
        for neighbour in adj[node]:
            if neighbour not in visited:
                if dfs(neighbour, node): 
                    return True
                    
            elif node != parent:   # since parent and node is always neighbours we need to skip it.
                return True
        return False
    
    for i in adj:
        if i not in visited:
            if dfs(i, -1):
                return True
    return False


def detectCycleDirected(V, adj):
    stack = []
    visited = set()
    
    def dfs(node):
        stack.append(node)
        visited.add(node)
        
        for neighbour in adj[node]:
            if neighbour not in visited:
                if dfs(neighbour):
                    return True
            elif neighbour in stack: 
                return True
        stack.pop()
        return False
        
    for i in range(V):
        if i not in visited:
            if dfs(i):
                return True
        
    return False

graph = [[0,1], [1,2], [1,3], [2,4], [3,4]]
print(detectCycleUndirected(graph))