import sys
input = sys.stdin.readline

def hashmap():
    n, m = map(int,input().split())
    lst = []
    hash = {}
    result= []
    for i in range(n):
        lst.append(input())

    for i in range(m):
        hash[input()] = 1

    for i in lst:
        if i in hash:
            result.append(i)
    print(len(result))
    result.sort()
    for i in result:
        print(i,end='')
hashmap()        


