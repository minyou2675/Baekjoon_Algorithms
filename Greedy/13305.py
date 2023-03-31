n = int(input())
city = [[0]*2 for i in range(0,n)]
distances = list(map(int, input().split()))
prices = list(map(int,input().split()))
cost = 0
for i in range(0,n-1):
    city[i][0] = distances[i]
    city[i][1] = prices[i]


    
for i in range(0,n):
    if i == 0:
        cost += city[i][0] * city[i][1]
        before = i
    elif city[before][1] < city[i][1]:
        cost += city[before][1] * city[i][0]
    else: #city[before][1] > city[i][1]
        before = i
        cost += city[i][0] * city[i][1]

print(cost)