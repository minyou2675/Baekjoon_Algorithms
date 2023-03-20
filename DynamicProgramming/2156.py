num_case = int(input())
num_list = [0]
dp = [0]

for i in range(num_case):
    a = int(input())
    num_list.append(a)

dp.append(num_list[1])

if num_case > 1:
    dp.append(num_list[1]+num_list[2])

for i in range(3,num_case+1):
        dp.append(max(dp[i-1],dp[i-2]+num_list[i],dp[i-3]+num_list[i-1]+num_list[i]))
    
print(dp[num_case])
    
 

    
