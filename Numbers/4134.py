import sys
import math

input = sys.stdin.readline

n = int(input())

lst = []

for i in range(n):
    lst.append(int(input()))
    
def is_prime_number(x):
     for i in range(2,int(math.sqrt(x))+1):
         if x % i == 0:
             return False
     return True

for i in lst:
    x = i
    if x == 0 or x == 1:
        print(2)
        continue
    else:
        while is_prime_number(x) == False:
            x += 1
    print(x)
        
         