import sys
import math

input = sys.stdin.readline

a, b = map(int, input().split())

c, d = map(int, input().split())

lcm = math.lcm(b,d)

numerator = int((a * (lcm/b)) + (c * (lcm/d)))

def GCD(x,y):
    while y:
        x, y = y, x%y
    return x
gcd = GCD(lcm,numerator)

print(f'{numerator//gcd} {lcm // gcd}')

