    import sys

    input = sys.stdin.readline

    n = int(input())

    lst = []


    def GCD(x,y):
        while(y):
            x, y = y, x%y
        return x
    def LCM(x,y):
        return (x*y) // GCD(x,y)

    for i in range(n):
        a,b = map(int,input().split())
        lst.append(LCM(a,b))
        
    for i in lst:
        print(i)
        
        