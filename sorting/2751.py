import sys

input = sys.stdin.readline

n = int(input())
lst = [int(input()) for i in range(0,n)] 

sorted_list = sorted(lst)
for i in sorted_list:
    print(i)