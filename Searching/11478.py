import sys
input = sys.stdin.readline

s = list(input().strip('\n'))

hash = {}
n = len(s)
cnt = 0 
for i in range(0,n):

    s_set = ''
    for k in s[i:]:
        s_set += k
        if s_set not in hash:
            cnt += 1
            hash[s_set] = 0
            
    
print(cnt)