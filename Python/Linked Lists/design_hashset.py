# 705. Design HashSet
# Design a HashSet without using any built-in hash table libraries.

# Implement MyHashSet class:

# void add(key) Inserts the value key into the HashSet.
# bool contains(key) Returns whether the value key exists in the HashSet or not.
# void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.
 

class Node(object):
    def __init__(self, key):
        self.key = key
        self.next = None

class MyHashSetUsingList(object):

    def __init__(self):
        self.s = [False] * ((10 ** 1) + 1)  # made smaller for testing

    def add(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.s[key] = True

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.s[key] = False

    def contains(self, key):
        """
        :type key: int
        :rtype: bool
        """
        return self.s[key]
    
    def printSet(self):
        print(self.s)

# Your MyHashSet object will be instantiated and called as such:
obj = MyHashSetUsingList()
key = 1
key2 = 2
obj.add(key)
obj.add(key2)
obj.remove(key)
param_3 = obj.contains(key)
obj.printSet()
