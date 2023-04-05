import sys
input = sys.stdin.readline
n,m = map(int, input().split())
s_set = []
t_set = []

for i in range(n):
    s_set.append(input().strip())
for i in range(m):
    t_set.append(input().strip())
def hash_table(s_set,t_set):
    cnt = 0
    temp = ''
    hash = {}
    for i in s_set:
        hash[i] = 1
    for i in  t_set:
       if f'{i}' in hash:
            cnt += 1
    print(cnt)
            
hash_table(s_set,t_set)
