import sys

input = sys.stdin.readline



while 1:
    stack = list(input().strip('\n'))
    parenthesis = []
    if stack[0] == '.':
        break
    for i in range(len(stack)):
        if stack[i] in ['[',']','(',')']:
            parenthesis.append(stack[i])
        
        if len(parenthesis) >= 2:
            
            if parenthesis[-2] == '[' and parenthesis[-1] == ']':
                parenthesis.pop()
                parenthesis.pop()
            elif parenthesis[-2] == '(' and parenthesis[-1] == ')':
                parenthesis.pop()
                parenthesis.pop()
    
    if len(parenthesis) > 0:
        print('no')
    else:
        print('yes')    
                     