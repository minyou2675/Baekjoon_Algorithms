n = int(input())

lst = [[0 for i in range(2)] for s in range(n)]

for i in range(n):
    lst[i][0], lst[i][1] = map(int,input().split())
lst.sort(key=lambda x: (x[1],x[0]))

for i in range(n):
    print(lst[i][0],lst[i][1])