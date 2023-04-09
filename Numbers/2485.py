import sys
import math

input = sys.stdin.readline

n = int(input())

lst = []
lst2 = []
cnt = 0

for i in range(n):
    lst.append(int(input()))
    
gcd = lst[1] - lst[0]
lst2.append(gcd)
    
for i in range(1,n-1):
    diff = lst[i+1] - lst[i]
    gcd = math.gcd(gcd,diff)
    lst2.append(diff)

    

for  i in lst2:
   cnt += int((i/ gcd)-1 )

print(cnt)