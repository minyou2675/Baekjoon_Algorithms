import sys



t= int(input())

lst = [True for i in range(1000001)]


def is_prime_number():
    lst[0] = False
    lst[1] = False
    for i in range(2,1001):
        if lst[i] == True:
            j = 2
            while i * j <= 1000000:
                lst[i * j] = False
                j += 1
is_prime_number()

for _ in range(t):
    result = 0
    n = int(sys.stdin.readline().rstrip())
    for i in range(2,n//2+1):
        if lst[i] and lst[n-i]:
            result += 1
    print(result)

