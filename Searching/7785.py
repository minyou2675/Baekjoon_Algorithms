import sys

input = sys.stdin.readline

n = int(input())

def hashmap(n):
    hash = {}
    ent = 0
    leav = 0
    for i in range(n):
        name, status = input().split()
        if status == 'enter':
            hash[name] = 1
        else:
            del hash[name] 
    h = sorted(hash.items(),reverse=True)
    for key,val in h:
        print(key)
hashmap(n)