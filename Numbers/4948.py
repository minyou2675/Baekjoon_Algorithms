import sys
import math

input = sys.stdin.readline

lst = [True for i in range((123456 * 2) + 1)]

result = []

result_out = []



def is_prime_number(n):
    lst[0] = False
    lst[1] = False
    for i in range(2,n+1):
        if lst[i] == True:
            j = 2
            while i * j <= n:
                lst[i * j] = False
                j += 1
is_prime_number(123456 * 2)

while True:
    a = int(input())
    if a == 0:
        break
    else:
        result.append(a)
    
for i in result:
    cnt = 0
    for j in range(i+1,(i *2)+1):
        if lst[j]:
            cnt += 1
    result_out.append(cnt)

for i in result_out:
    print(i)