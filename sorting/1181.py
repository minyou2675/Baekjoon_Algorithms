import sys
input = sys.stdin.readline
n = int(input())
lst = []
for i in range(n):
    a = input()
    if a not in lst:
        lst.append(a)
    else:
        continue
lst.sort(key=lambda x: (len(x),x))

for i in lst:
    print(i,end="")