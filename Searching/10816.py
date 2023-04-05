import sys
input = sys.stdin.readline



def hashmap():
    m = int(input())
    lst = list(map(int, input().split()))
    hash = {}
    n = int(input())
    lst2 = list(map(int, input().split()))
    for i in lst2:
        hash[i] = 0
    for i in lst:
        if i in hash:
            hash[i] += 1
    for s in lst2:
        print(hash[s],end='')

hashmap()