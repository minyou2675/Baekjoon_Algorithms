n = int(input())
cnt = 0
result =[]

for i in range(1000):
    for j in range(5000//3):
        if((3*i) + (5*j) == n):
            result.append(i+j)

if len(result) == 0:
    print (-1)
else:
    print(min(result))