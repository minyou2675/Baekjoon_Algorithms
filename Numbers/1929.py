import sys

input = sys.stdin.readline

m, n = map(int,input().split())

lst = [True for i in range(0,n+1)]

def is_prime_number(n):
    lst[0] = False
    lst[1] = False
    for i in range(0,n+1):
        if lst[i] == True:
            j = 2
            while i * j <= n:
                lst[i*j] = False
                j += 1
                
is_prime_number(n)
for i in range(m,n+1):
    if lst[i]:
        print(i)
    else:
        continue