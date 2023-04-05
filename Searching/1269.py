import sys

input = sys.stdin.readline

n,m = map(int, input().split())

lst = set(map(int, input().split()))
lst2 = set(map(int, input().split()))
temp = lst.copy()
print(temp)
lst = lst - lst2
print(lst)
lst2 = lst2 - temp
print(lst2)

print(len(lst)+len(lst2))
