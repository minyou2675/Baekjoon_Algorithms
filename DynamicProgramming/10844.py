stair_len = int(input())
dp = [[0 for i in range(10)] for __ in range(stair_len+1)]
dp[1] = [0,1,1,1,1,1,1,1,1,1]
for i in range(2,stair_len+1):
    for j in range(0,10):
        if j == 0:
            dp[i][j] = dp[i-1][1]
        elif j == 9:
            dp[i][j] = dp[i-1][8]
        else:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
            
   
    
        
print(sum(dp[stair_len])%1000000000)