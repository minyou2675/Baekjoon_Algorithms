import sys

input = sys.stdin.readline

n = int(input())

stack = []



for i in range(n):
    lst = input().split()
    if lst[0] == 'push':
        stack.append(int(lst[1]))
    elif lst[0] == 'top':
        if not stack:
           print(-1)
        else:
            print(stack[-1])
    elif lst[0] == 'pop':
        if not stack:
            print(-1)
        else:
            print(stack[-1])
            stack.pop()
    elif lst[0] == 'size':
        print(len(stack))
    elif lst[0] == 'empty':
        if not stack:
            print(1)
        else:
            print(0)
