from queue import Queue

def BFS(graph):
    q = Queue()
    q.put(0)
    visited = set()
    ans = []

    while not q.empty():
        n = q.get()
        ans.append(n)

        for node in graph[n]:
            if node not in visited:
                visited.add(node)
                q.put(node)

    return ans

graph = {0: {1}, 1: {2}, 2: {3,4}, 3: {4}, 4:{2}}
print(BFS(graph))
