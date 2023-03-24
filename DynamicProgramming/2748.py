def Fib(n):
    if n in lst.keys():
        return lst[n]
    else:
        lst[n] = Fib(n-1)+Fib(n-2)
        return lst[n]


lst = {0 : 0 , 1 : 1}    
num = int(input())

print(Fib(num))