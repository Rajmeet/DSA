def DFS(graph):
    ans = []
    visited = set()

    def dfs(node):
        visited.add(node)
        for n in graph[node]:
            if n not in visited:
                ans.append(n)        
                dfs(n)
    
    for vertex in graph:
        if vertex not in visited:
            dfs(vertex)
    return ans

graph = {0: {1}, 1: {2}, 2: {3,4}, 3: {5}, 4:{}, 5:{}}
print(DFS(graph))