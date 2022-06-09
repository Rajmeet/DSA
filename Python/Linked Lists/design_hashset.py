# 705. Design HashSet
# Design a HashSet without using any built-in hash table libraries.

# Implement MyHashSet class:

# void add(key) Inserts the value key into the HashSet.
# bool contains(key) Returns whether the value key exists in the HashSet or not.
# void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.

# we can generate a hashset using simple chaining with our hash being modulus 

class LinkedList:
    def __init__(self):
        self.head = None
        
    def add(self, value):
        node = Node(value)
        node.next = self.head
        self.head = node
        
    def remove(self, value):
        if self.head and value == self.head.value:
            self.head = self.head.next
            return
        
        cur = self.head
        prev = None
        while cur and cur.value != value:
            prev = cur
            cur = cur.next
            
        if cur:
            prev.next = cur.next
            
    def contains(self, value):
        cur = self.head
        
        while cur:
            if cur.value == value:
                return True
            cur = cur.next
            
        return False
    
    
class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

        
class MyHashSet:

    def __init__(self):
        self.hashset = [LinkedList() for _ in range(10000)]
        self.n = 10000
        

    def add(self, key: int) -> None:
        if self.contains(key):
            return
        
        self._get(key).add(key)
        

    def remove(self, key: int) -> None:
        self._get(key).remove(key)
        

    def contains(self, key: int) -> bool:
        return self._get(key).contains(key)
    
    
    def _get(self, key: int) -> LinkedList:
        hashValue = key % self.n
        return self.hashset[hashValue]

# Your MyHashSet object will be instantiated and called as such:
obj = MyHashSet()
key = 1
key2 = 2
obj.add(key)
obj.add(key2)
obj.remove(key)
param_3 = obj.contains(key)
