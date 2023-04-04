import sys
input = sys.stdin.readline

n = int(input())

lst = [[0 for i in range(2)] for s in range(n)]

for i in range(n):
    a,b = input().split()
    lst[i][0] = int(a)
    lst[i][1] = b

lst.sort(key=lambda x: x[0])

for i in range(n):
    print(f"{lst[i][0]} {lst[i][1]}") 