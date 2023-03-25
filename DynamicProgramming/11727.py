num = int(input())
lst = [0 for i in range(num+1)]
def dp(n):   
    if n == 0 or n == 1:
        return 1
    elif lst[n] != 0:
        return lst[n]
    else:
        lst[n] = dp(n-2)+dp(n-1)
        return lst[n]
print(dp(num)%10007)