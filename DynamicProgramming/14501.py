day_rows = int(input())
days = []
dp = []

for i in range(day_rows):
   days.append(list(map(int, input().split())))

for i in range(day_rows+1):
    dp.append(0)

        
for i in range(day_rows):
    cost = 0
    if i+1+days[i][0] > day_rows:
        continue
    else:
        dp[i] = days[i][1]
    for j in range(i+days[i][0]-1,day_rows):
        if j+ days[j][0]  <= day_rows and cost == 0:
         print(i,j)
         dp[i] = dp[i] + days[j][1]
         cost = days[j][0]-1
        else:
            cost = cost - 1
            continue
print(max(dp))