import sys

input = sys.stdin.readline

n = int(input())



for i in range(n):
    stack = list(input().strip('\n'))
    cnt = 0
    result = 0
    while stack:
       
        if stack[-1] == ')':
            cnt += 1
        else:
            cnt -= 1
        if cnt < 0:
            result = 1
            break
        stack.pop()
      
    
    if cnt != 0 or result == 1:
        print('NO')
    else:
        print('YES')
    
 