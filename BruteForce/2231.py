N = int(input())
result = 0
results = []

for i in range(1,N):
    result = i # 186
    origin = i
    while(i != 0):
      
        result += i%10 #6
        i = i // 10 # 18
    if result == N:
     results.append(origin)

if not results:
    print(0)
else:
    print(min(results))
