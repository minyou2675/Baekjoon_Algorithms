import sys

input = sys.stdin.readline

n,m = map(int, input().split())

lst = set(map(int, input().split()))
lst2 = set(map(int, input().split()))
temp = lst.copy()

lst = lst - lst2

lst2 = lst2 - temp

print(len(lst)+len(lst2))
