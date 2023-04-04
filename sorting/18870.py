import sys

input = sys.stdin.readline

n = int(input())
lst = []
zipped_lst = {}


lst = list(map(int,input().split()))
    
    
sorted_lst =sorted(lst)

idx = 0
for i in sorted_lst:
    if f'{i}' not in zipped_lst:
        zipped_lst[f'{i}'] = idx
       
        idx += 1 
    else:
        continue
for i in lst:
    print(zipped_lst.get(f'{i}'),end=" ")
